// FUN_00b244e0 @ 00b244e0 body=[[00b244e0, 00b24560]]


void FUN_00b244e0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_2 != param_3) {
    uVar3 = *(undefined4 *)(param_1 + 0xc + param_2 * 0x18);
    puVar1 = (undefined4 *)(param_1 + param_2 * 0x18);
    uVar4 = puVar1[4];
    uVar5 = puVar1[5];
    uVar6 = puVar1[1];
    puVar2 = (undefined4 *)(param_1 + param_3 * 0x18);
    uVar7 = *puVar1;
    uVar8 = puVar1[2];
    *puVar1 = *(undefined4 *)(param_1 + param_3 * 0x18);
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[5] = puVar2[5];
    *puVar2 = uVar7;
    puVar2[1] = uVar6;
    puVar2[2] = uVar8;
    puVar2[3] = uVar3;
    puVar2[4] = uVar4;
    puVar2[5] = uVar5;
  }
  return;
}

