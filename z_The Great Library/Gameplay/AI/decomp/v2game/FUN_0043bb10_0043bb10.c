// FUN_0043bb10 @ 0043bb10 body=[[0043bb10, 0043bc02] [0043bc06, 0043bc0d]]


int FUN_0043bb10(char *param_1)

{
  char *_Src;
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  uint in_stack_00000018;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_8 = 0;
  local_c = 0;
  local_14 = 0;
  _Src = param_1;
  if (in_stack_00000018 < 0x10) {
    _Src = (char *)&param_1;
  }
  FID_conflict__sscanf(_Src,"%d.%d.%d.%d",&local_10,&local_8,&local_c,&local_14);
  local_c = local_c + -1;
  local_8 = local_8 + -1;
  iVar1 = (*unaff_ESI + -43800000) / 0x18;
  iVar2 = 1;
  if ((int)local_10 < 0) {
    iVar2 = -1;
  }
  *unaff_ESI = (*unaff_ESI + -43800000) % 0x18 +
               (iVar2 * ((((local_10 ^ (int)local_10 >> 0x1f) - ((int)local_10 >> 0x1f)) * 0x16d -
                         (int)((float)(int)((double)iVar1 / 365.0) * 365.0)) + iVar1) * 3 + 0x538ab8
               ) * 8;
  FUN_00424670(unaff_ESI);
  FUN_0043ab80(unaff_ESI,local_c);
  iVar1 = *unaff_ESI + -43800000;
  *unaff_ESI = (*unaff_ESI - iVar1 % 0x18) + local_14;
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  return iVar1 / 0x18;
}

