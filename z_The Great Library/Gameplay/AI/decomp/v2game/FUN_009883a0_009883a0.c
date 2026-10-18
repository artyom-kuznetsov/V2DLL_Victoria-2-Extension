// FUN_009883a0 @ 009883a0 body=[[009883a0, 009883df]]


wchar_t FUN_009883a0(char param_1)

{
  wchar_t wVar1;
  int iVar2;
  int in_ECX;
  mbstate_t local_c;
  wchar_t local_8 [2];
  
  local_c = 0;
  iVar2 = __Mbrtowc(local_8,&param_1,1,&local_c,(_Cvtvec *)(in_ECX + 0x18));
  wVar1 = L'\xffff';
  if (-1 < iVar2) {
    wVar1 = local_8[0];
  }
  return wVar1;
}

