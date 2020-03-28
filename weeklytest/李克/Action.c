Action()
{
	//登录
	web_reg_save_param_json(
		"ParamName=login",
		"QueryString=$.error",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);


	web_submit_data("login_request",
		"Action=https://snailpet.com/v2/Passport/login",
		"Method=POST",
		"TargetFrame=",
		"Referer=",
		ITEMDATA,
		"Name=phone", "Value=18861752688", ENDITEM,
		"Name=password", "Value=19801106641", ENDITEM,
		"Name=shop_id", "Value=null", ENDITEM,
		LAST);
	
	lr_output_message(lr_eval_string("login"));
	if(atoi(lr_eval_string("login")) == 0){
		lr_output_message("login_success");
	}else{
		lr_output_message("login_fail");
	}
 
	lr_think_time(3);

	//修改会员
	web_reg_save_param_json(
		"ParamName=update_member",
		"QueryString=$.error",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
	
	
	web_custom_request("update_member_request",
		"URL=https://snailpet.com/v2/Members/update",
		"Method=post",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={\"addr\": \"\",\"cardNumber\": \"4561111231231234\",\"mark\": \"sgsbb\",\"name\": \"zjw\",\"pets\": [{\"is_birthday_notice\":\"0\",\"birthday\": \"1582992000\",\"avatar\":\"\",\"mark\": \"\",\"name\": \"ss\",\"sex\": \"2\",\"color\": \"黄色\",\"weight_new\":\"55\",\"speciesId\":\"47\",\"is_sterilization\":\"1\",\"petId\":\"614038\"}],\"phone\": \"13222224444\",\"spare_phone\": \"\",\"sex\": \"1\",\"is_spending_msg\": 1,\"is_open_upgrade\": 1,\"shopId\": \"17560\",\"member_tags\": \"\",\"memberId\":\"586550\",\"shop_id\": 17560}",LAST);
  
  	lr_output_message(lr_eval_string("update_member"));
	if(atoi(lr_eval_string("update_member")) == 0){
		lr_output_message("update_member_success");
	}else{
		lr_output_message("update_member_fail");
	}
	
	lr_think_time(3);
	
	//筛选会员
  	  web_reg_save_param_json(
		"ParamName=screen_customer",
		"QueryString=$.error",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
   
  	 web_submit_data("screen_customer_requset",
		"Action=https://snailpet.com/v2/analysis_es/action",
		"Method=POST",
		"TargetFrame=",
		"Referer=",
		ITEMDATA,
		"Name=ex_current_page", "Value=筛选会员", ENDITEM,
		"Name=ex_kind", "Value=点击", ENDITEM,
		"Name=ex_next_page", "Value=用户标签", ENDITEM,
		"Name=ex_title", "Value=用户标签", ENDITEM,
		"Name=shop_id", "Value=17560", ENDITEM,
		LAST);
  	
  	lr_output_message(lr_eval_string("screen_customer"));
	if(atoi(lr_eval_string("screen_customer")) == 0){
		lr_output_message("screen_customer_success");
	}else{
		lr_output_message("screen_customer_fail");
	}
 	
  	lr_think_time(3);
  	
  	//消费支出
  	web_reg_save_param_json(
		"ParamName=consumer_spending",
		"QueryString=$.error",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
	

	web_submit_data("consumer_spending_request",
		"Action=https://snailpet.com/v2/Shop/addSpending",
		"Method=POST",
		"TargetFrame=",
		"Referer=",
		ITEMDATA,
		"Name=actionTime", "Value=1582992000", ENDITEM,
		"Name=type", "Value=14", ENDITEM,
		"Name=mark", "Value=1", ENDITEM,
		"Name=amount", "Value=10", ENDITEM,
		"Name=shopId", "Value=17560", ENDITEM,
		"Name=shop_id", "Value=17560", ENDITEM,
		LAST);

  	lr_output_message(lr_eval_string("consumer_spending"));
	if(atoi(lr_eval_string("consumer_spending")) == 0){
		lr_output_message("consumer_spending_success");
	}else{
		lr_output_message("consumer_spending_fail");
	}
  		
  	lr_think_time(3);
  		
	//入库商品
  	web_reg_save_param_json(
		"ParamName=Warehousing",
		"QueryString=$.error",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
  		
  	web_submit_data("Warehousing_request",
		"Action=https://snailpet.com/v2/product/update/stocks",
		"Method=POST",
		"TargetFrame=",
		"Recource=0",
		"Referer=",
		"Body={\"productId\":\2134188\,\"shopId\":\17560\,\"number\":\24\,\"mark\": \"\",\"inPrice\":\"22\",\"shelf_life\":\0\,\"production_time\":\null\,\"exp_time\":\null\,\"shop_id\":\17560\}",LAST);
  		
  	lr_output_message(lr_eval_string("Warehousing"));
	if(atoi(lr_eval_string("Warehousing")) == 0){
		lr_output_message("Warehousing_success");
	}else{
		lr_output_message("Warehousing_fail");
	}
		
	return 0;
}