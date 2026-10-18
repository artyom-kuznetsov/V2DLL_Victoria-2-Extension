// FUN_00a55890 @ 00a55890 body=[[00a55890, 00a55bc9]]


void FUN_00a55890(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  int *piVar9;
  int in_ECX;
  
  iVar2 = FUN_009be510(param_1 + 0x6bcfc,in_ECX + 0x5c,in_ECX + 0x5c,*(undefined4 *)(param_1 + 100))
  ;
  *(int *)(in_ECX + 0x11c) = iVar2;
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + iVar2 * 4);
  }
  *(int **)(in_ECX + 0xf8) = piVar3;
  uVar4 = (**(code **)(*piVar3 + 0x24))(piVar3,0,"WorldViewProjectionMatrix");
  *(undefined4 *)(in_ECX + 0xfc) = uVar4;
  uVar4 = (**(code **)(**(int **)(in_ECX + 0xf8) + 0x24))(*(int **)(in_ECX + 0xf8),0,"CurrentState")
  ;
  *(undefined4 *)(in_ECX + 0x100) = uVar4;
  uVar4 = (**(code **)(**(int **)(in_ECX + 0xf8) + 0x34))(*(int **)(in_ECX + 0xf8),&DAT_00e19be0);
  *(undefined4 *)(in_ECX + 0x104) = uVar4;
  uVar4 = (**(code **)(**(int **)(in_ECX + 0xf8) + 0x24))(*(int **)(in_ECX + 0xf8),0,"vFirstColor");
  *(undefined4 *)(in_ECX + 0x108) = uVar4;
  uVar4 = (**(code **)(**(int **)(in_ECX + 0xf8) + 0x24))(*(int **)(in_ECX + 0xf8),0,"vSecondColor")
  ;
  *(undefined4 *)(in_ECX + 0x10c) = uVar4;
  piVar3 = *(int **)(in_ECX + 0xf8);
  uVar4 = (**(code **)(*piVar3 + 0x34))(piVar3,"ColorProgress");
  *(undefined4 *)(in_ECX + 0x110) = uVar4;
  uVar4 = (**(code **)(**(int **)(in_ECX + 0xf8) + 0x24))(*(int **)(in_ECX + 0xf8),0);
  *(undefined4 *)(in_ECX + 0x114) = uVar4;
  uVar5 = (**(code **)(**(int **)(in_ECX + 0xf8) + 0x24))(*(int **)(in_ECX + 0xf8),0,&DAT_00e19384);
  uVar4 = DAT_00f092fc;
  *(undefined4 *)(in_ECX + 0x118) = uVar5;
  *(undefined4 *)(in_ECX + 0x17c) = uVar4;
  *(undefined4 *)(in_ECX + 0x178) = uVar4;
  if (*(int *)(in_ECX + 0xc0) != 0) {
    uVar4 = FUN_009bcbf0(in_ECX + 0xb0,1);
    *(undefined4 *)(in_ECX + 0xe8) = uVar4;
  }
  if (*(int *)(in_ECX + 0xdc) != 0) {
    uVar4 = FUN_009bcbf0(in_ECX + 0xcc,1);
    *(undefined4 *)(in_ECX + 0xec) = uVar4;
    FUN_009bcea0(param_1 + 0x158,in_ECX + 0xcc);
    puVar6 = (undefined *)0x1;
    do {
      puVar7 = (undefined *)0x0;
      if (puVar6 == (undefined *)0x0) break;
      puVar7 = (undefined *)((int)puVar6 * 2);
      puVar6 = puVar7;
    } while (puVar7 < &DAT_00e0bce4);
    fVar1 = (float)(int)puVar7;
    if ((int)puVar7 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    piVar8 = (int *)0x1;
    *(float *)(in_ECX + 0x178) = 1.472842e+07 / fVar1;
    piVar9 = piVar8;
    if ((int *)0x1 < piVar3) {
      do {
        piVar9 = (int *)0x0;
        if (piVar8 == (int *)0x0) break;
        piVar8 = (int *)((int)piVar8 * 2);
        piVar9 = piVar8;
      } while (piVar8 < piVar3);
    }
    fVar1 = (float)(int)piVar9;
    if ((int)piVar9 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    *(float *)(in_ECX + 0x17c) = (float)(int)piVar3 / fVar1;
  }
  uVar4 = *(undefined4 *)(in_ECX + 0x178);
  *(undefined4 *)(in_ECX + 0x130) = 0;
  *(undefined4 *)(in_ECX + 0x134) = 0;
  *(undefined4 *)(in_ECX + 0x16c) = uVar4;
  if (*(char *)(in_ECX + 0x120) == '\0') {
    *(undefined4 *)(in_ECX + 0x144) = uVar4;
    uVar4 = *(undefined4 *)(in_ECX + 0x17c);
    *(undefined4 *)(in_ECX + 0x158) = 0;
    *(undefined4 *)(in_ECX + 0x148) = 0;
    *(undefined4 *)(in_ECX + 0x15c) = uVar4;
  }
  else {
    *(undefined4 *)(in_ECX + 0x158) = uVar4;
    uVar4 = *(undefined4 *)(in_ECX + 0x17c);
    *(undefined4 *)(in_ECX + 0x144) = 0;
    *(undefined4 *)(in_ECX + 0x148) = uVar4;
    *(undefined4 *)(in_ECX + 0x15c) = 0;
  }
  *(undefined4 *)(in_ECX + 0x170) = uVar4;
  *(undefined8 *)(in_ECX + 0x124) = 0;
  *(ulonglong *)(in_ECX + 0x138) = (ulonglong)(uint)(float)*(int *)(in_ECX + 0xf4) << 0x20;
  *(undefined4 *)(in_ECX + 300) = 0;
  *(ulonglong *)(in_ECX + 0x14c) = (ulonglong)(uint)(float)*(int *)(in_ECX + 0xf0);
  *(ulonglong *)(in_ECX + 0x160) =
       CONCAT44((float)*(int *)(in_ECX + 0xf4),(float)*(int *)(in_ECX + 0xf0));
  *(undefined4 *)(in_ECX + 0x140) = 0;
  *(undefined4 *)(in_ECX + 0x154) = 0;
  *(undefined4 *)(in_ECX + 0x168) = 0;
  return;
}

