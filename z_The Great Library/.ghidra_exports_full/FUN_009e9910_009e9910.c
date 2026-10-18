// FUN_009e9910 @ 009e9910 body=[[009e9910, 009e9967]]


void FUN_009e9910(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = DAT_0131cb44 - DAT_0131cb40 >> 0x1f;
  iVar2 = (DAT_0131cb44 - DAT_0131cb40) / 0x1c + iVar1;
  if (iVar2 != iVar1) {
    DAT_0131cb6c = DAT_0131cb6c + 1;
    if (iVar2 - iVar1 <= DAT_0131cb6c) {
      DAT_0131cb6c = 0;
    }
    FUN_009e7900();
    (**(code **)(*in_ECX + 8))();
  }
  return;
}

