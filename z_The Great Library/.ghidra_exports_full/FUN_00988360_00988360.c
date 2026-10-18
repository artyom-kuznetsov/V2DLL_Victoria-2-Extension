// FUN_00988360 @ 00988360 body=[[00988360, 00988392]]


wchar_t * FUN_00988360(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  int in_ECX;
  
  if (param_1 != param_2) {
    do {
      wVar1 = __Towupper(*param_1,(_Ctypevec *)(in_ECX + 8));
      *param_1 = wVar1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}

