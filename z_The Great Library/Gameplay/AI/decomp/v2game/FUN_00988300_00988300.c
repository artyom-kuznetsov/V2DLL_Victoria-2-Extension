// FUN_00988300 @ 00988300 body=[[00988300, 00988332]]


wchar_t * FUN_00988300(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  int in_ECX;
  
  if (param_1 != param_2) {
    do {
      wVar1 = __Towlower(*param_1,(_Ctypevec *)(in_ECX + 8));
      *param_1 = wVar1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}

