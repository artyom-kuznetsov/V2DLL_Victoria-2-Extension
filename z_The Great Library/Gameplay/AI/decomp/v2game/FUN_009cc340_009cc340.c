// FUN_009cc340 @ 009cc340 body=[[009cc340, 009cc624]]


void FUN_009cc340(void)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  int unaff_ESI;
  float in_XMM0_Da;
  float fVar8;
  undefined4 uVar9;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int *piStack_2c;
  undefined1 auStack_1c [8];
  undefined4 uStack_14;
  int local_10 [3];
  
  if (*(int **)(in_ECX + 0x21c) == (int *)0x0) {
    return;
  }
  piStack_2c = local_10;
  puStack_30 = (undefined1 *)0x9cc368;
  (**(code **)(**(int **)(in_ECX + 0x21c) + 0x4c))();
  puStack_30 = (undefined1 *)0x9cc378;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0xac) + 0xb0))();
  if (iVar3 == 3) goto LAB_009cc5ea;
  if (*(short *)(in_ECX + 0x244) == 0) {
    puStack_30 = (undefined1 *)0x9cc396;
    FUN_009cae00();
    iVar3 = local_10[0];
    puStack_30 = &stack0xffffffe0;
    iVar7 = (int)in_XMM0_Da;
    puStack_34 = (undefined1 *)0x9cc3b0;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x1a8) + 0x60))();
    sVar1 = *(short *)(iVar4 + 2);
    puStack_34 = &stack0xffffffe0;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x1a8) + 0xf4))();
    iVar3 = (iVar3 - sVar1) - (int)*(short *)(iVar4 + 2);
    if ((iVar3 < 1) || (iVar7 <= iVar3)) {
      if (iVar3 < 0) {
        uVar9 = 0;
        puStack_30 = (undefined1 *)0x0;
        puStack_34 = (undefined1 *)0x9cc43f;
        FUN_009caff0();
        puStack_30 = (undefined1 *)0x9cc446;
        FUN_009cae80();
        puStack_34 = *(undefined1 **)(in_ECX + 0xa4);
        *(undefined4 *)(in_ECX + 0xa8) = uVar9;
        puStack_30 = *(undefined1 **)(in_ECX + 0xa8);
      }
      else {
        if (iVar3 <= iVar7) goto LAB_009cc5e3;
        fVar8 = (float)iVar7;
        puStack_34 = (undefined1 *)0x9cc47d;
        puStack_30 = (undefined1 *)fVar8;
        FUN_009caff0();
        puStack_30 = (undefined1 *)0x9cc484;
        FUN_009cae80();
        *(float *)(in_ECX + 0xa8) = fVar8;
LAB_009cc5d0:
        puStack_30 = *(undefined1 **)(in_ECX + 0xa8);
        puStack_34 = *(undefined1 **)(in_ECX + 0xa4);
      }
    }
    else {
      fVar8 = (float)iVar3;
      *(float *)(in_ECX + 0xa8) = fVar8;
      *(undefined4 *)(in_ECX + 0x214) = uStack_14;
      *(int *)(in_ECX + 0x218) = local_10[0];
      puStack_34 = (undefined1 *)0x9cc409;
      puStack_30 = (undefined1 *)fVar8;
      FUN_009caff0();
      puStack_30 = (undefined1 *)0x9cc410;
      FUN_009cae80();
      puStack_34 = *(undefined1 **)(in_ECX + 0xa4);
      *(float *)(in_ECX + 0xa8) = fVar8;
      puStack_30 = *(undefined1 **)(in_ECX + 0xa8);
    }
LAB_009cc5de:
    FUN_009ccd10();
  }
  else {
    puStack_30 = auStack_1c;
    puStack_34 = (undefined1 *)0x9cc4a3;
    (**(code **)(**(int **)(in_ECX + 0x1a8) + 0x3c))();
    puStack_34 = &stack0xffffffe0;
    (**(code **)(**(int **)(in_ECX + 0x154) + 0x3c))();
    (**(code **)(**(int **)(in_ECX + 0x1a8) + 0xf4))(&stack0xffffffdc);
    (**(code **)(**(int **)(in_ECX + 0x1a8) + 0xf4))(&stack0xffffffd8);
    FUN_009cad90();
    iVar3 = (int)in_XMM0_Da;
    psVar5 = (short *)(**(code **)(**(int **)(in_ECX + 0x154) + 0x60))(&piStack_2c);
    sVar1 = *psVar5;
    psVar5 = (short *)(**(code **)(**(int **)(in_ECX + 0x154) + 0xf4))(&puStack_34);
    iVar4 = (unaff_ESI - sVar1) - (int)*psVar5;
    if ((0 < iVar4) && (iVar4 < iVar3)) {
      fVar8 = (float)iVar4;
      *(float *)(in_ECX + 0xa4) = fVar8;
      *(undefined4 *)(in_ECX + 0x214) = uStack_14;
      *(int *)(in_ECX + 0x218) = local_10[0];
      puStack_34 = (undefined1 *)0x9cc557;
      puStack_30 = (undefined1 *)fVar8;
      FUN_009caff0();
      puStack_30 = (undefined1 *)0x9cc55e;
      FUN_009cae80();
      puStack_30 = *(undefined1 **)(in_ECX + 0xa8);
      *(float *)(in_ECX + 0xa4) = fVar8;
      puStack_34 = *(undefined1 **)(in_ECX + 0xa4);
      goto LAB_009cc5de;
    }
    if (iVar4 < 0) {
      uVar9 = 0;
      puStack_30 = (undefined1 *)0x0;
      puStack_34 = (undefined1 *)0x9cc58a;
      FUN_009caff0();
      puStack_30 = (undefined1 *)0x9cc591;
      FUN_009cae80();
      puStack_30 = *(undefined1 **)(in_ECX + 0xa8);
      *(undefined4 *)(in_ECX + 0xa4) = uVar9;
      puStack_34 = *(undefined1 **)(in_ECX + 0xa4);
      goto LAB_009cc5de;
    }
    if (iVar3 < iVar4) {
      fVar8 = (float)iVar3;
      puStack_34 = (undefined1 *)0x9cc5c1;
      puStack_30 = (undefined1 *)fVar8;
      FUN_009caff0();
      puStack_30 = (undefined1 *)0x9cc5c8;
      FUN_009cae80();
      *(float *)(in_ECX + 0xa4) = fVar8;
      goto LAB_009cc5d0;
    }
  }
LAB_009cc5e3:
  *(undefined4 *)(in_ECX + 0x70) = 10;
LAB_009cc5ea:
  puStack_30 = (undefined1 *)0x9cc5f7;
  cVar2 = (**(code **)(**(int **)(in_ECX + 0x21c) + 0x30))();
  if (cVar2 != '\0') {
    puStack_30 = auStack_1c;
    puStack_34 = (undefined1 *)0x9cc60d;
    puVar6 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x21c) + 0x4c))();
    *(undefined4 *)(in_ECX + 0x214) = *puVar6;
    *(undefined4 *)(in_ECX + 0x218) = puVar6[1];
  }
  return;
}

