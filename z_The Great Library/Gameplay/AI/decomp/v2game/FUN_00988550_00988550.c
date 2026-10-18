// FUN_00988550 @ 00988550 body=[[00988550, 009885c7]]


void FUN_00988550(wchar_t *param_1)

{
  char cVar1;
  char *_Dest;
  wchar_t *_Source;
  char *pcVar2;
  undefined1 *unaff_EDI;
  
  _Dest = (char *)FUN_00aad56b(*(int *)(param_1 + 8) + 1);
  _Source = param_1;
  if (7 < *(uint *)(param_1 + 10)) {
    _Source = *(wchar_t **)param_1;
  }
  _wcstombs(_Dest,_Source,*(size_t *)(param_1 + 8));
  _Dest[*(int *)(param_1 + 8)] = '\0';
  *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *unaff_EDI = 0;
  pcVar2 = _Dest;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(_Dest,(int)pcVar2 - (int)(_Dest + 1));
  FUN_00aaea59(_Dest);
  return;
}

