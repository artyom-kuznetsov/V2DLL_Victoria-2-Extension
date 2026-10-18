// FUN_00b2d7a0 @ 00b2d7a0 body=[[00b2d7a0, 00b2d803]]


int FUN_00b2d7a0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_00b2d4b0(param_1,param_2,param_3,param_4);
  if (iVar2 != 0) {
    pcVar1 = *(code **)(param_3 + 4);
    (*pcVar1)(*(undefined4 *)(param_2 + 0x30));
    (*pcVar1)(*(undefined4 *)(param_2 + 0x34));
    (*pcVar1)(*(undefined4 *)(param_2 + 0x38));
    (*pcVar1)(*(undefined4 *)(param_2 + 0x3c));
    FUN_00b2f8b0(param_2,pcVar1);
    FUN_00b2f880(param_2);
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
  }
  return iVar2;
}

