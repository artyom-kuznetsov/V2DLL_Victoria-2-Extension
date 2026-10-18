// FUN_009c4e40 @ 009c4e40 body=[[009c4e40, 009c4f4b]]


void FUN_009c4e40(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  short sVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  undefined4 *puVar7;
  undefined4 auStack_48 [15];
  int iStack_c;
  
  (**(code **)(*in_ECX + 0x6c))();
  piVar2 = (int *)in_ECX[0x55];
  if ((float)piVar2[0x28] != (float)in_ECX[0x54]) {
    pcVar3 = *(code **)(*piVar2 + 0x6c);
    piVar2[0x28] = in_ECX[0x54];
    (*pcVar3)();
  }
  *(int *)(in_ECX[0x55] + 0x174) = in_ECX[0x61];
  iVar5 = (**(code **)(*in_ECX + 0x114))();
  iVar4 = in_ECX[0x55];
  *(undefined4 *)(iVar4 + 0xb8) = *(undefined4 *)(iVar5 + 4);
  *(undefined8 *)(iVar4 + 0xbc) = *(undefined8 *)(iVar5 + 8);
  *(undefined8 *)(iVar4 + 0xc4) = *(undefined8 *)(iVar5 + 0x10);
  *(undefined1 *)(iVar4 + 0xcc) = *(undefined1 *)(iVar5 + 0x18);
  sVar1 = *(short *)((int)in_ECX + 0x4e);
  iVar4 = in_ECX[0x3e];
  iVar5 = in_ECX[0x6a];
  puVar7 = auStack_48;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *param_3;
    param_3 = param_3 + 1;
    puVar7 = puVar7 + 1;
  }
  iStack_c = iVar4;
  (**(code **)(*(int *)in_ECX[0x55] + 0x68))
            (param_1,param_2,auStack_48,param_4,param_5,iVar5,(int)sVar1);
  *(undefined4 *)(in_ECX[0x55] + 0x174) = DAT_00f092fc;
  return;
}

