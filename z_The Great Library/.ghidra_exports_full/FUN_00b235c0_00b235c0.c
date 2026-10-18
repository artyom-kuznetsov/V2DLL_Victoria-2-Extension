// FUN_00b235c0 @ 00b235c0 body=[[00b235c0, 00b23616]]


int FUN_00b235c0(undefined4 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((param_3 == 0) && (param_2 < *(uint *)(param_1[1] + 0x18))) {
    uVar1 = *(uint *)(param_1[1] + 0x14);
    iVar2 = FUN_00b2a2f0(*param_1,uVar1 + param_2,CARRY4(uVar1,param_2));
    if (iVar2 != 0) {
      param_1[2] = param_2;
    }
    return iVar2;
  }
  FUN_00b1f840("Past end of file");
  return 0;
}

