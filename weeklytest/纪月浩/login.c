login()
{	
	lr_start_transaction("login");
	lr_think_time(5);

	//µÇÂ¼¼ì²éµã
	web_reg_save_param_json(
		"ParamName=login_resp",
		"QueryString=$.error",
		"SelectAll=No",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	//µÇÂ¼ÇëÇó
	web_submit_data("web_submit_data",
		"Action=https://snailpet.com/v2/Passport/login",
		"Method=POST",
		"TargetFrame=",
		"Referer=",
		ITEMDATA,
		"Name=password", "Value=741852", ENDITEM,
		"Name=phone", "Value=18018032389", ENDITEM,
		"Name=shop_id", "Value=null", ENDITEM,
		LAST);
		
	//¶ÏÑÔ
	if (atoi(lr_eval_string("{login_resp}")) == 0) {
		lr_end_transaction("login", LR_PASS);
	} else {
		lr_end_transaction("login", LR_FAIL);
	}
	
	return 0;
}
