// FUN_009e9970 @ 009e9970 body=[[009e9970, 009e99b6]]


void FUN_009e9970(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = DAT_0131cb44 - DAT_0131cb40 >> 0x1f;
  if ((DAT_0131cb44 - DAT_0131cb40) / 0x1c + iVar1 != iVar1) {
    FUN_009e7900();
    (**(code **)(*in_ECX + 8))();
  }
  return;
}

