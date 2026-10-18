// FUN_00a6d770 @ 00a6d770 body=[[00a6d770, 00a6dbd8]]


void FUN_00a6d770(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined4 uStack_2c;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [8];
  
  iVar5 = *(int *)(in_ECX + 0x260);
  *(undefined4 *)(in_ECX + 0x1c4) = param_1;
  for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x20)) {
    uStack_2c = (undefined1 *)iVar5;
    uStack_10 = (**(code **)(*(int *)(in_ECX + 0x1f0) + 4))();
    (**(code **)(*(int *)(in_ECX + 0x1f0) + 4))(iVar5);
    iVar4 = (**(code **)(*(int *)(in_ECX + 0x1f0) + 4))(iVar5);
    (**(code **)(*piStack_18 + 200))
              (CONCAT22(((short)((uint)unaff_EBX >> 0x10) - *(short *)(in_ECX + 0x292)) +
                        *(short *)(in_ECX + 0x1c6),
                        ((short)*(undefined4 *)(iVar4 + 0x9c) - *(short *)(in_ECX + 0x290)) +
                        *(short *)(in_ECX + 0x1c4)));
  }
  for (iVar5 = *(int *)(in_ECX + 0x270); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x20)) {
    uStack_2c = (undefined1 *)iVar5;
    iVar4 = (**(code **)(*(int *)(in_ECX + 0x214) + 4))();
    uStack_10 = *(undefined4 *)(iVar4 + 0xc0);
    iVar4 = (**(code **)(*(int *)(in_ECX + 0x214) + 4))(iVar5);
    (**(code **)(*(int *)(in_ECX + 0x214) + 4))
              (iVar5,CONCAT22((uStack_14._2_2_ - *(short *)(in_ECX + 0x292)) +
                              *(short *)(in_ECX + 0x1c6),
                              ((short)*(undefined4 *)(iVar4 + 0xc0) - *(short *)(in_ECX + 0x290)) +
                              *(short *)(in_ECX + 0x1c4)));
    FUN_009e7350();
  }
  uStack_2c = auStack_c;
  iVar5 = (**(code **)(**(int **)(in_ECX + 0x1bc) + 0xf4))();
  sVar1 = *(short *)(iVar5 + 2);
  sVar2 = *(short *)(in_ECX + 0x1c6);
  iVar5 = *(int *)(in_ECX + 0x298);
  *(float *)(iVar5 + 0x80) = (float)(int)*(short *)(in_ECX + 0x1c4);
  *(float *)(iVar5 + 0x84) = (float)(int)(short)(sVar1 + sVar2 + -0x32);
  piStack_18 = (int *)(int)((float)(*(int *)(*(int *)(iVar5 + 0x78) + 0x6b9bc) / 2) +
                           *(float *)(iVar5 + 0x80));
  uStack_14 = (int)((float)(*(int *)(*(int *)(iVar5 + 0x78) + 0x6b9c0) / 2) +
                   *(float *)(iVar5 + 0x84));
  (**(code **)(*(int *)(iVar5 + 0x260) + 0xcc))(&piStack_18);
  sVar1 = *(short *)(in_ECX + 0x1c6);
  psVar6 = (short *)(**(code **)(**(int **)(in_ECX + 0x1bc) + 0xf4))(&uStack_14);
  sVar2 = *psVar6;
  sVar3 = *(short *)(in_ECX + 0x1c4);
  iVar5 = *(int *)(in_ECX + 0x294);
  *(float *)(iVar5 + 0x84) = (float)(int)sVar1;
  *(float *)(iVar5 + 0x80) = (float)(int)(short)(sVar2 + sVar3 + -0x32);
  (**(code **)(*(int *)(iVar5 + 0x260) + 0xcc))(&stack0xffffffe0);
  (**(code **)(**(int **)(in_ECX + 0x1bc) + 200))(*(undefined4 *)(in_ECX + 0x1c4));
  uStack_2c = (undefined1 *)
              CONCAT22(*(short *)(in_ECX + 0x1c6) + -6,*(short *)(in_ECX + 0x1c4) + -6);
  (**(code **)(**(int **)(in_ECX + 0x2a8) + 200))(uStack_2c);
  iVar5 = (**(code **)(**(int **)(in_ECX + 0x1bc) + 0xf4))(&stack0xffffffdc);
  (**(code **)(**(int **)(in_ECX + 0x2ac) + 200))
            (CONCAT22(*(short *)(iVar5 + 2) + *(short *)(in_ECX + 0x1c6),
                      *(short *)(in_ECX + 0x1c4) + -6));
  sVar1 = *(short *)(in_ECX + 0x1c6);
  psVar6 = (short *)(**(code **)(**(int **)(in_ECX + 0x1bc) + 0xf4))(&uStack_2c);
  (**(code **)(**(int **)(in_ECX + 0x2a0) + 200))
            (CONCAT22(sVar1 + -6,*psVar6 + *(short *)(in_ECX + 0x1c4)));
  (**(code **)(**(int **)(in_ECX + 0x2a4) + 200))
            (CONCAT22(*(short *)(in_ECX + 0x1c6) + -6,*(short *)(in_ECX + 0x1c4) + -6));
  return;
}

