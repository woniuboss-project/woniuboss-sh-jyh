add_label()
{
	lr_start_transaction("add_label");
	lr_think_time(5);
	
	//��ӱ�ǩ�ļ���
	web_reg_save_param_json(
		"ParamName=add_label_resp",
		"QueryString=$.error",
		SEARCH_FILTERS,
		LAST);
	
	//��ӱ�ǩ����
	web_submit_data("web_submit_data",
		"Action=https://snailpet.com/v2/shop/tags/add",
		"Method=POST",
		"TargetFrame=",
		"Referer=",
		ITEMDATA,
		"Name=name", "Value=jttnb", ENDITEM,
		"Name=shop_id", "Value=17562", ENDITEM,
		"Name=store_id", "Value=29427", ENDITEM,
		LAST);

	//����
	if (atoi(lr_eval_string("{add_label_resp}")) == 0) {
		lr_end_transaction("add_label", LR_PASS);
	} else {
		lr_end_transaction("add_label", LR_FAIL);
	}
	

	return 0;
}
