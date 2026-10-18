// FUN_00a2f120 @ 00a2f120 body=[[00a2f120, 00a2f228]]


void FUN_00a2f120(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  short sVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  undefined4 *puVar6;
  undefined4 auStack_48 [15];
  int iStack_c;
  
  (**(code **)(*in_ECX + 0x6c))();
  piVar2 = (int *)in_ECX[0x54];
  if ((float)piVar2[0x28] != (float)in_ECX[0x53]) {
    pcVar3 = *(code **)(*piVar2 + 0x6c);
    piVar2[0x28] = in_ECX[0x53];
    (*pcVar3)();
  }
  *(int *)(in_ECX[0x54] + 0x174) = in_ECX[0x60];
  iVar5 = (**(code **)(*in_ECX + 0x114))();
  iVar4 = in_ECX[0x54];
  *(undefined4 *)(iVar4 + 0xb8) = *(undefined4 *)(iVar5 + 4);
  *(undefined8 *)(iVar4 + 0xbc) = *(undefined8 *)(iVar5 + 8);
  *(undefined8 *)(iVar4 + 0xc4) = *(undefined8 *)(iVar5 + 0x10);
  *(undefined1 *)(iVar4 + 0xcc) = *(undefined1 *)(iVar5 + 0x18);
  sVar1 = *(short *)((int)in_ECX + 0x4e);
  iVar4 = in_ECX[0x3e];
  puVar6 = auStack_48;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *param_3;
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
  }
  iStack_c = iVar4;
  (**(code **)(*(int *)in_ECX[0x54] + 0x68))
            (param_1,param_2,auStack_48,param_4,param_5,param_6,(int)sVar1);
  *(undefined4 *)(in_ECX[0x54] + 0x174) = DAT_00f092fc;
  return;
}

