// FUN_0057ab80 @ 0057ab80 body=[[0057ab80, 0057abfc] [0057ac00, 0057aca1] [0057aca5, 0057aceb]]


int * FUN_0057ab80(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1 != param_2) {
    iVar5 = param_2[1] - *param_2 >> 0x1f;
    iVar6 = (param_2[1] - *param_2) / 0x18 + iVar5;
    uVar7 = iVar6 - iVar5;
    if (iVar6 == iVar5) {
      FUN_0057af60(param_1,&param_2,*param_1,param_1[1]);
      return param_1;
    }
    iVar5 = *param_1;
    uVar2 = (param_1[1] - iVar5) / 0x18;
    if (uVar7 <= uVar2) {
      puVar4 = (undefined4 *)FUN_0057b280();
      puVar1 = (undefined4 *)param_1[1];
      for (; puVar4 != puVar1; puVar4 = puVar4 + 6) {
        (**(code **)*puVar4)(0);
      }
      param_1[1] = *param_1 + ((param_2[1] - *param_2) / 0x18) * 0x18;
      return param_1;
    }
    if (uVar7 <= (uint)((param_1[2] - iVar5) / 0x18)) {
      iVar5 = *param_2;
      FUN_0057b280();
      iVar5 = FUN_0057b2f0(iVar5 + uVar2 * 0x18,param_2);
      param_1[1] = iVar5;
      return param_1;
    }
    if (iVar5 != 0) {
      FUN_0057af40();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*param_1);
    }
    cVar3 = FUN_00738bf0();
    if (cVar3 != '\0') {
      iVar5 = FUN_0057b2f0(*param_2,param_2);
      param_1[1] = iVar5;
    }
  }
  return param_1;
}

