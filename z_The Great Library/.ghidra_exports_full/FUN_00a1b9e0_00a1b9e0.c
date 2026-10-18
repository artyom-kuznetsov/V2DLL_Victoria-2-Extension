// FUN_00a1b9e0 @ 00a1b9e0 body=[[00a1b9e0, 00a1ba4b]]


uint FUN_00a1b9e0(void *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  uint _Size;
  char *unaff_EDI;
  
  uVar2 = param_2;
  _Size = param_2 * param_3;
  if (*unaff_EDI != '\0') {
    BVar3 = ReadFile(*(HANDLE *)(unaff_EDI + 4),param_1,_Size,&param_2,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      unaff_EDI[8] = '\x01';
    }
    return param_2 / uVar2;
  }
  iVar1 = *(int *)(unaff_EDI + 0x1c);
  if (*(uint *)(unaff_EDI + 0x18) < iVar1 + _Size) {
    _Size = *(uint *)(unaff_EDI + 0x18) - iVar1;
  }
  FID_conflict__memcpy(param_1,(void *)(*(int *)(unaff_EDI + 0x14) + iVar1),_Size);
  *(uint *)(unaff_EDI + 0x1c) = *(int *)(unaff_EDI + 0x1c) + _Size;
  return _Size / uVar2;
}

