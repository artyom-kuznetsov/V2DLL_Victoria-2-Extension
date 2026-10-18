// FUN_00987770 @ 00987770 body=[[00987770, 009877c6]]


void FUN_00987770(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0131c530;
  iVar1 = param_2;
  if (param_2 != param_3) {
    for (; param_3 != iVar2; param_3 = param_3 + 0x10) {
      FUN_009beeb0(param_3);
      iVar1 = iVar1 + 0x10;
    }
    FUN_004651b0(DAT_0131c530);
    DAT_0131c530 = iVar1;
  }
  *param_1 = param_2;
  return;
}

