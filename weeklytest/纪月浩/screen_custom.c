screen_custom()
{
	lr_start_transaction("screen_customer");

	lr_think_time(5);
		
	//添加标签的检查点
	web_reg_save_param_json(
		"ParamName=screen_customer_resp",
		"QueryString=$.error",
		SEARCH_FILTERS,
		LAST);
		
	//通过用户标签筛选会员请求
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
		"Name=shop_id", "Value=17562", ENDITEM,
		LAST);
	
	//断言
	if (atoi(lr_eval_string("{screen_customer_resp}")) == 0) {
		lr_end_transaction("screen_customer", LR_PASS);
	} else {
		lr_end_transaction("screen_customer", LR_FAIL);
	}
		
	return 0;
}
