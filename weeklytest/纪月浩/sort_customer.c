sort_customer()
{
	lr_start_transaction("sort_customer");

	lr_think_time(5);
		
	//��ӱ�ǩ�ļ���
	web_reg_save_param_json(
		"ParamName=sort_customer_resp",
		"QueryString=$.error",
		SEARCH_FILTERS,
		LAST);
		
	//ͨ���û���ǩɸѡ��Ա����
	web_submit_data("sort_customer_requset",
		"Action=https://snailpet.com/v2/analysis_es/action",
		"Method=POST",
		"TargetFrame=",
		"Referer=",
		ITEMDATA,
		"Name=ex_current_page", "Value=��Ա�б�", ENDITEM,
		"Name=ex_kind", "Value=���", ENDITEM,
		"Name=ex_next_page", "Value=ע��ʱ��_����", ENDITEM,
		"Name=ex_title", "Value=ע��ʱ��_����", ENDITEM,
		"Name=shop_id", "Value=17562", ENDITEM,
		LAST);
	
	//����
	if (atoi(lr_eval_string("{sort_customer_resp}")) == 0) {
		lr_end_transaction("sort_customer", LR_PASS);
	} else {
		lr_end_transaction("sort_customer", LR_FAIL);
	}
		
	return 0;
}
