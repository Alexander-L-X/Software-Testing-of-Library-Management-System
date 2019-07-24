Action()
{

	web_add_cookie("Idea-31757f28=f3615b8e-e2a2-43d0-a7e3-da86b7744875; DOMAIN=localhost");

	web_add_auto_header("Accept", 
		"text/html, application/xhtml+xml, image/jxr, */*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept-Language", 
		"zh-Hans-CN,zh-Hans;q=0.5");

	web_add_auto_header("UA-CPU", 
		"AMD64");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64; Trident/7.0; rv:11.0) like Gecko");

	web_url("localhost:8080", 
		"URL=http://localhost:8080/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("favicon.ico", 
		"URL=http://localhost:8080/favicon.ico", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Accept-Language", 
		"zh-Hans-CN,zh-Hans;q=0.5");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(11);

	web_submit_data("loginCheck", 
		"Action=http://localhost:8080/api/loginCheck", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://localhost:8080/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=20170001", ENDITEM, 
		"Name=passwd", "Value=111111", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"text/html, application/xhtml+xml, image/jxr, */*");

	web_url("admin_main.html", 
		"URL=http://localhost:8080/admin_main.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("favicon.ico_2", 
		"URL=http://localhost:8080/favicon.ico", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Accept", 
		"text/html, application/xhtml+xml, image/jxr, */*");

	web_add_auto_header("Accept-Language", 
		"zh-Hans-CN,zh-Hans;q=0.5");

	lr_think_time(19);

	web_url("book_add.html", 
		"URL=http://localhost:8080/book_add.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/admin_main.html", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_submit_form("book_add_do.html", 
		"Snapshot=t14.inf", 
		ITEMDATA, 
		"Name=name", "Value=1", ENDITEM, 
		"Name=author", "Value=1", ENDITEM, 
		"Name=publish", "Value=1", ENDITEM, 
		"Name=isbn", "Value=1", ENDITEM, 
		"Name=introduction", "Value=1", ENDITEM, 
		"Name=language", "Value=1", ENDITEM, 
		"Name=price", "Value=1", ENDITEM, 
		"Name=pubdate", "Value=2019-7-20", ENDITEM, 
		"Name=classId", "Value=1", ENDITEM, 
		"Name=pressmark", "Value=1", ENDITEM, 
		"Name=state", "Value=1", ENDITEM, 
		LAST);

	lr_think_time(11);

	web_link("详情", 
		"Text=详情", 
		"Ordinal=17", 
		"Snapshot=t15.inf", 
		LAST);

	lr_think_time(6);

	web_link("图书管理系统", 
		"Text=图书管理系统", 
		"Snapshot=t16.inf", 
		LAST);

	return 0;
}