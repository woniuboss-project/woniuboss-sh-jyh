customer_add()
{
	lr_start_transaction("add_customer");
	lr_think_time(5);
	
	//��Ա���ӽӿڵļ���
	web_reg_save_param_json(
		"ParamName=add_customer_resp",
		"QueryString=$.error",
		SEARCH_FILTERS,
		LAST);
	
	//������Ա�ӿ�����
	web_custom_request("add_customer_request",
		"URL=https://snailpet.com/v2/Members/add",
		"Method=post",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"EncType=application/json",
		"Body={\"addr\": \"\",\"cardNumber\": \"12306\",\"mark\": \"�ҵ��ֵܶ���\",\"name\": \"zbd\",\"pets\": [{\"birthday\": \"1583251200\",\"mark\": \"\",\"name\": \"̰ħ��̰��\",\"sex\": \"1\",\"color\": \"\",\"weight_new\": null,\"speciesId\": \"3\"}],\"phone\": \"14444444444\",\"spare_phone\": \"\",\"sex\": \"1\",\"is_spending_msg\": 1,\"is_open_upgrade\": 1,\"shopId\": \"17562\",\"member_tags\": \"44236\",\"shop_id\": 17562}",
		LAST);
	
	//����
	if (atoi(lr_eval_string("{add_customer_resp}")) == 0) {
		lr_end_transaction("add_customer", LR_PASS);
	} else {
		lr_end_transaction("add_customer", LR_FAIL);
	}
	
	return 0;
}
