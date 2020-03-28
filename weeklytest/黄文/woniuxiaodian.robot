*** Settings ***
Library           SeleniumLibrary

*** Test Cases ***
login
    Open Browser    https://snailpet.com/index
    Sleep    3s
    Click Element    css=.white_btn
    Input Text    css=input.cla-tex:nth-child(1)    13918154018
    Input Password    css=input.cla-tex:nth-child(2)    nihaip199
    Click Element    css=.ori-btn
    Wait Until Element Is Visible    xpath=/html/body/app-root/snail-header/div/div/span/a
    Element Should Contain    xpath=/html/body/app-root/snail-header/div/div/span/a    安全退出
    Close Browser
    Get Cookies

add_customer
    Open Browser    https://snailpet.com/index
    Click Element    css=.red_btn
    Input Text    css=input.cla-tex:nth-child(1)    13918154018
    Input Password    css=input.cla-tex:nth-child(2)    nihaip199
    Click Element    css=.ori-btn
    Wait Until Element Is Visible    css=a.menu_item:nth-child(3) > div:nth-child(3)
    Click Element    css=a.menu_item:nth-child(3) > div:nth-child(3)
    sleep    8
    Click Element    css=div.screen-edit-btn-new:nth-child(7) > a:nth-child(2)
    Input Text    xpath=/html/body/app-root/div/snail-member-main/snail-members/div[2]/div/div/div[2]/div/div[1]/div[1]/div[1]/div/div/input    小王
    Input Text    xpath=/html/body/app-root/div/snail-member-main/snail-members/div[2]/div/div/div[2]/div/div[1]/div[1]/div[2]/div/div/input    13800000000
    Input Text    xpath=/html/body/app-root/div/snail-member-main/snail-members/div[2]/div/div/div[2]/div/div[2]/ul/li/div[1]/div[1]/div/div/input    旺旺
    Click Element    css=div.pop_window:nth-child(1) > div:nth-child(3) > div:nth-child(2)
    Element Should Contain    css=.body > td:nth-child(10) > a:nth-child(4)    删除
    Close Browser

add_comm
    Open Browser    https://snailpet.com/index
    Click Element    css=.red_btn
    Input Text    css=input.cla-tex:nth-child(1)    13918154018
    Input Password    css=input.cla-tex:nth-child(2)    nihaip199
    Click Element    css=.ori-btn    #登录
    Wait Until Element Is Visible    css=a.menu_item:nth-child(4) > div:nth-child(3)    #点击商品管理
    Click Element    css=a.menu_item:nth-child(4) > div:nth-child(3)
    sleep    10
    Click Element    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[2]/div[1]/a[1]    #新增
    Click Element    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[5]/div/div/div[2]/div/div[3]/div[2]/label/input
    Input Text    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[5]/div/div/div[2]/div/div[4]/div[1]/div/div/input    lll
    sleep    3
    Click Element    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[5]/div/div/div[2]/div/div[8]/div[1]
    sleep    3
    Click Element    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[5]/div/div/div[2]/div/div[8]/div[1]/div/div/ul/li[1]
    sleep    3
    Click Element    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[5]/div/div/div[2]/div/div[8]/div[2]
    sleep    3
    Click Element    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[5]/div/div/div[2]/div/div[8]/div[2]/div/div/ul/li[1]
    sleep    3
    Input Text    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[5]/div/div/div[2]/div/div[9]/div[1]/div/div/input    5
    Input Text    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[5]/div/div/div[2]/div/div[9]/div[2]/div/div/input    55
    Click Element    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[5]/div/div/div[3]/div[2]
    Element Should Contain    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[3]/table/tbody/tr/td[8]/a[5]/span/span[1]    下架
    Close Browser

add_warehouse
    Open Browser    https://snailpet.com/index
    Click Element    css=.red_btn
    Input Text    css=input.cla-tex:nth-child(1)    13918154018
    Input Password    css=input.cla-tex:nth-child(2)    nihaip199
    Click Element    css=.ori-btn    #登录
    Wait Until Element Is Visible    css=a.menu_item:nth-child(4) > div:nth-child(3)    #点击商品管理
    Click Element    css=a.menu_item:nth-child(4) > div:nth-child(3)
    sleep    5
    Click Element    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[3]/table/tbody/tr/td[8]/a[1]
    sleep    5
    Input Text    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[7]/div/div/div[2]/div/div[1]/div/div/input    5
    Click Element    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[7]/div/div/div[3]/div[2]
    sleep    2
    Element Should Contain    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[3]/table/tbody/tr/td[7]/a    25

remover
    Open Browser    https://snailpet.com/index
    Click Element    css=.red_btn
    Input Text    css=input.cla-tex:nth-child(1)    13918154018
    Input Password    css=input.cla-tex:nth-child(2)    nihaip199
    Click Element    css=.ori-btn    #登录
    Wait Until Element Is Visible    css=a.menu_item:nth-child(4) > div:nth-child(3)    #点击商品管理
    Click Element    css=a.menu_item:nth-child(4) > div:nth-child(3)
    sleep    3
    Click Element    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[3]/table/tbody/tr/td[9]/a[2]
    sleep    3
    Input Text    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[8]/div/div/div[2]/div/div[1]/div/div/input    5
    Click Element    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[8]/div/div/div[3]/div[2]
    Element Should Contain    xpath=/html/body/app-root/div/ng-component/div/div/snail-product-stock/div[3]/table/tbody/tr/td[7]/a    15
