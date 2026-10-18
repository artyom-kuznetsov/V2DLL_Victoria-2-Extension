// FUN_00a6ded0 @ 00a6ded0 body=[[00a6ded0, 00a6df27] [00a6df30, 00a6e2bc] [00a6e2c0, 00a6e800]]


void FUN_00a6ded0(void)

{
  char cVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  int *piVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  undefined1 *puVar13;
  code *pcVar14;
  int *unaff_ESI;
  int *piVar15;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int aiStack_4c [2];
  int aiStack_44 [2];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [8];
  
  cVar1 = FUN_00a6e810(in_EAX);
  if (cVar1 == '\0') {
    pcVar14 = *(code **)(**(int **)(in_EAX + 0x298) + 0x38);
  }
  else {
    pcVar14 = *(code **)(**(int **)(in_EAX + 0x298) + 0x34);
  }
  (*pcVar14)();
  cVar1 = FUN_00a6e990(in_EAX);
  if (cVar1 == '\0') {
    pcVar14 = *(code **)(**(int **)(in_EAX + 0x294) + 0x38);
  }
  else {
    pcVar14 = *(code **)(**(int **)(in_EAX + 0x294) + 0x34);
  }
  (*pcVar14)();
  for (iVar11 = *(int *)(in_EAX + 0x260); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x20)) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_5c = (int *)0x0;
    uStack_54 = 0;
    iVar6 = iVar11;
    uStack_54 = (**(code **)(*(int *)(in_EAX + 0x1f0) + 4))();
    iVar7 = iVar11;
    piVar2 = (int *)(**(code **)(*(int *)(in_EAX + 0x1f0) + 4))();
    piVar15 = aiStack_44;
    iVar3 = (**(code **)(*piVar2 + 0xf4))();
    uStack_58 = (int)*(short *)(iVar3 + 2);
    piVar2 = aiStack_4c;
    iVar3 = (**(code **)(*uStack_5c + 0x3c))();
    uStack_5c = (int *)((int)*(short *)(iVar3 + 2) + (int)uStack_5c);
    puVar8 = &uStack_54;
    iVar3 = (**(code **)(**(int **)(in_EAX + 0x1bc) + 0xf4))(puVar8);
    if ((int)*(short *)(iVar3 + 2) + (int)*(short *)(in_EAX + 0x1c6) < uStack_60) {
LAB_00a6e04f:
      uStack_64 = (**(code **)(*(int *)(in_EAX + 0x1f0) + 4))(iVar11);
      iVar6 = (**(code **)(*(int *)(in_EAX + 0x1f0) + 4))(iVar11);
      piVar4 = aiStack_4c;
      (**(code **)(**(int **)(in_EAX + 0x1bc) + 0xf4))();
      (**(code **)(*unaff_ESI + 0x3c))(aiStack_4c);
      (**(code **)(*piVar15 + 0xf4))(aiStack_4c);
      iVar7 = (**(code **)(*(int *)(in_EAX + 0x1f0) + 4))(iVar11);
      iVar3 = (**(code **)(*(int *)(in_EAX + 0x1f0) + 4))(iVar11);
      (**(code **)(**(int **)(in_EAX + 0x1bc) + 0xf4))(&uStack_54);
      psVar5 = (short *)(**(code **)(*piVar2 + 0x3c))(&uStack_54);
      puVar8 = (undefined4 *)(((int)*psVar5 - (int)*(short *)(in_EAX + 0x1c4)) - iVar3);
      (**(code **)(*piVar4 + 0xf4))(&uStack_54);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
    }
    else {
      uStack_64 = (**(code **)(*(int *)(in_EAX + 0x1f0) + 4))(iVar11);
      piVar4 = (int *)(**(code **)(*(int *)(in_EAX + 0x1f0) + 4))(iVar11);
      (**(code **)(*piVar4 + 0xf4))(&uStack_64);
      (**(code **)(*unaff_ESI + 0x3c))(&uStack_58);
      psVar5 = (short *)(**(code **)(**(int **)(in_EAX + 0x1bc) + 0xf4))(&uStack_58);
      if ((int)*(short *)(in_EAX + 0x1c4) + (int)*psVar5 < uStack_60) goto LAB_00a6e04f;
    }
    piVar4 = (int *)(**(code **)(*(int *)(in_EAX + 0x1f0) + 4))(iVar11);
    psVar5 = (short *)(**(code **)(*piVar4 + 0x3c))(auStack_30);
    if (*psVar5 < *(short *)(in_EAX + 0x1c4)) {
LAB_00a6e1d8:
      piVar2 = (int *)(**(code **)(*(int *)(in_EAX + 0x1f0) + 4))(iVar11);
      iVar3 = (**(code **)(*piVar2 + 0x3c))(auStack_30);
      piVar2 = (int *)((int)*(short *)(in_EAX + 0x1c6) - (int)*(short *)(iVar3 + 2));
      piVar4 = (int *)(**(code **)(*(int *)(in_EAX + 0x1f0) + 4))(iVar11);
      (**(code **)(*piVar4 + 0x3c))(auStack_34);
      if (iVar7 < 0) {
        iVar7 = 0;
      }
    }
    else {
      piVar4 = (int *)(**(code **)(*(int *)(in_EAX + 0x1f0) + 4))(iVar11);
      iVar3 = (**(code **)(*piVar4 + 0x3c))(auStack_34);
      if (*(short *)(iVar3 + 2) < *(short *)(in_EAX + 0x1c6)) goto LAB_00a6e1d8;
    }
    unaff_ESI = (int *)(**(code **)(*(int *)(in_EAX + 0x1f0) + 4))(iVar11);
    (**(code **)(*(int *)unaff_ESI[0x28] + 0xe0))(iVar7,piVar2);
    (**(code **)(**(int **)(iVar6 + 0xa0) + 0xe4))(piVar15,puVar8);
  }
  iVar11 = *(int *)(in_EAX + 0x270);
  do {
    if (iVar11 == 0) {
      psVar5 = (short *)(**(code **)(**(int **)(in_EAX + 0x1bc) + 0xf4))(auStack_c);
      uStack_58 = CONCAT22(0xffff,*psVar5 + -0x28);
      FUN_009cb4a0(uStack_58);
      uStack_58 = CONCAT22(uStack_58._2_2_,0xffff);
      iVar11 = (**(code **)(**(int **)(in_EAX + 0x1bc) + 0xf4))(auStack_10);
      uStack_5c = (int *)CONCAT22(*(short *)(iVar11 + 2) + -0x28,(undefined2)uStack_5c);
      FUN_009cb4a0(uStack_5c);
      psVar5 = (short *)(**(code **)(**(int **)(in_EAX + 0x1bc) + 0xf4))(auStack_14);
      sVar12 = *psVar5;
      iVar11 = *(int *)(in_EAX + 0x2a8);
      *(short *)(iVar11 + 0xb8) = sVar12 + 10;
      *(undefined2 *)(iVar11 + 0xba) = 5;
      uStack_60 = CONCAT22(5,sVar12 + 10);
      (**(code **)(**(int **)(iVar11 + 0x94) + 0x100))(uStack_60);
      psVar5 = (short *)(**(code **)(**(int **)(in_EAX + 0x1bc) + 0xf4))(auStack_1c);
      sVar12 = *psVar5;
      iVar11 = *(int *)(in_EAX + 0x2ac);
      *(short *)(iVar11 + 0xb8) = sVar12 + 10;
      *(undefined2 *)(iVar11 + 0xba) = 5;
      (**(code **)(**(int **)(iVar11 + 0x94) + 0x100))(CONCAT22(5,sVar12 + 10));
      iVar7 = (**(code **)(**(int **)(in_EAX + 0x1bc) + 0xf4))(auStack_24);
      iVar11 = *(int *)(in_EAX + 0x2a0);
      sVar12 = *(short *)(iVar7 + 2) + 10;
      *(short *)(iVar11 + 0xba) = sVar12;
      *(undefined2 *)(iVar11 + 0xb8) = 5;
      (**(code **)(**(int **)(iVar11 + 0x94) + 0x100))(CONCAT22(sVar12,5));
      iVar7 = (**(code **)(**(int **)(in_EAX + 0x1bc) + 0xf4))(auStack_2c);
      iVar11 = *(int *)(in_EAX + 0x2a4);
      sVar12 = *(short *)(iVar7 + 2) + 10;
      *(undefined2 *)(iVar11 + 0xb8) = 5;
      *(short *)(iVar11 + 0xba) = sVar12;
      (**(code **)(**(int **)(iVar11 + 0x94) + 0x100))(CONCAT22(sVar12,5));
      return;
    }
    uStack_5c = (int *)0x0;
    uStack_54 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    iVar6 = iVar11;
    uStack_50 = (**(code **)(*(int *)(in_EAX + 0x214) + 4))(iVar11);
    iVar7 = iVar11;
    iVar3 = (**(code **)(*(int *)(in_EAX + 0x214) + 4))(iVar11);
    puVar8 = &uStack_58;
    (**(code **)(**(int **)(iVar3 + 0x58) + 0xd8))();
    piVar15 = &iStack_18;
    iVar3 = (**(code **)(**(int **)(in_EAX + 0x1bc) + 0xf4))();
    uStack_58 = (int)*(short *)(iVar3 + 2) + (int)*(short *)(in_EAX + 0x1c6);
    puVar13 = auStack_20;
    iVar3 = (**(code **)(*uStack_5c + 0x3c))(puVar13);
    if ((int)uStack_5c < (int)*(short *)(iVar3 + 2) + (int)uStack_64._2_2_) {
LAB_00a6e3da:
      uStack_60 = (**(code **)(*(int *)(in_EAX + 0x214) + 4))(iVar11);
      iVar6 = (**(code **)(*(int *)(in_EAX + 0x214) + 4))(iVar11);
      (**(code **)(**(int **)(iVar6 + 0x58) + 0xd8))(&uStack_5c);
      iVar6 = (**(code **)(**(int **)(in_EAX + 0x1bc) + 0xf4))(auStack_3c);
      iVar3 = (int)*(short *)(iVar6 + 2);
      (**(code **)(*unaff_ESI + 0x3c))(aiStack_44);
      iVar6 = (**(code **)(*(int *)(in_EAX + 0x214) + 4))(iVar11);
      iVar9 = (**(code **)(*(int *)(in_EAX + 0x214) + 4))(iVar11);
      (**(code **)(**(int **)(iVar9 + 0x58) + 0xd8))(&stack0xffffff94);
      psVar5 = (short *)(**(code **)(**(int **)(in_EAX + 0x1bc) + 0xf4))(&uStack_58);
      puVar13 = (undefined1 *)(((int)(short)iVar6 - (int)*(short *)(in_EAX + 0x1c4)) - (int)*psVar5)
      ;
      (**(code **)(*piVar15 + 0x3c))(&uStack_60);
      if (iVar3 < 0) {
        iVar3 = 0;
      }
    }
    else {
      uStack_60 = (**(code **)(*(int *)(in_EAX + 0x214) + 4))(iVar11);
      iVar3 = (**(code **)(*(int *)(in_EAX + 0x214) + 4))(iVar11);
      (**(code **)(**(int **)(iVar3 + 0x58) + 0xd8))(&uStack_60);
      psVar5 = (short *)(**(code **)(**(int **)(in_EAX + 0x1bc) + 0xf4))(auStack_34);
      iVar3 = (int)*psVar5 + (int)*(short *)(in_EAX + 0x1c4);
      psVar5 = (short *)(**(code **)(*unaff_ESI + 0x3c))(auStack_3c);
      if (uStack_60 < (int)*psVar5 + (int)(short)uStack_58) goto LAB_00a6e3da;
    }
    iVar9 = iVar11;
    piVar4 = (int *)(**(code **)(*(int *)(in_EAX + 0x214) + 4))(iVar11,puVar13);
    piVar2 = aiStack_44;
    psVar5 = (short *)(**(code **)(*piVar4 + 0x3c))(piVar2);
    if (*psVar5 < *(short *)(in_EAX + 0x1c4)) {
LAB_00a6e550:
      piVar4 = (int *)(**(code **)(*(int *)(in_EAX + 0x214) + 4))(iVar11);
      iVar6 = (**(code **)(*piVar4 + 0x3c))(&uStack_54);
      puVar13 = (undefined1 *)((int)*(short *)(in_EAX + 0x1c6) - (int)*(short *)(iVar6 + 2));
      piVar4 = (int *)(**(code **)(*(int *)(in_EAX + 0x214) + 4))(iVar11);
      psVar5 = (short *)(**(code **)(*piVar4 + 0x3c))(&uStack_60);
      iVar6 = (int)*(short *)(in_EAX + 0x1c4) - (int)*psVar5;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      if ((int)puVar8 < 0) {
        puVar8 = (undefined4 *)0x0;
      }
    }
    else {
      piVar4 = (int *)(**(code **)(*(int *)(in_EAX + 0x214) + 4))(iVar11);
      iVar10 = (**(code **)(*piVar4 + 0x3c))(&uStack_50);
      if (*(short *)(iVar10 + 2) < *(short *)(in_EAX + 0x1c6)) goto LAB_00a6e550;
    }
    iVar7 = (**(code **)(*(int *)(in_EAX + 0x214) + 4))
                      (iVar11,piVar2,iVar9,puVar13,piVar15,puVar8,iVar7,iVar6);
    (**(code **)(**(int **)(iVar7 + 0x58) + 0xe0))(iVar6,puVar8);
    (**(code **)(**(int **)(iVar3 + 0x58) + 0xe4))(piVar15,iVar9);
    iVar11 = *(int *)(iVar11 + 0x20);
  } while( true );
}

