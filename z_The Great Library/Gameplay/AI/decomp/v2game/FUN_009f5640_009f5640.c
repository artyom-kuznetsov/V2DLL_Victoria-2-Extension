// FUN_009f5640 @ 009f5640 body=[[009f5640, 009f5729] [009f572f, 009f5778] [009f5780, 009f5818]]


void FUN_009f5640(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  char cVar4;
  short sVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int *in_ECX;
  char *extraout_EDX;
  undefined4 local_30;
  uint local_1c;
  
  iVar8 = param_1;
  if (*(int *)(param_1 + 0x10) == 1) {
    iVar7 = in_ECX[0x22];
    while (iVar7 != 0) {
      cVar4 = FUN_00988f00();
      if (*extraout_EDX == cVar4) {
        return;
      }
      iVar7 = *(int *)(extraout_EDX + 8);
    }
  }
  *(undefined1 *)(in_ECX + 0x2d) = 0;
  psVar6 = (short *)FUN_009f7b90(&param_1);
  if (((*(short *)((int)in_ECX + 0x3a) == psVar6[1]) && ((short)in_ECX[0xe] == *psVar6)) ||
     ((short)in_ECX[0xe] == 0)) {
    iVar7 = FUN_009f7c00(*(undefined2 *)((int)in_ECX + 0x3a),(short)in_ECX[0xe]);
    iVar8 = FUN_009f7850(in_ECX,iVar8);
    FUN_009f5820(iVar8 + iVar7);
    param_1 = CONCAT31(param_1._1_3_,10);
    do {
      iVar8 = FUN_005484e0(in_ECX + 6,&param_1,1);
      *(short *)(in_ECX + 0x10) = (short)in_ECX[0x10] + 1;
    } while (iVar8 != -1);
    *(short *)(in_ECX + 0x10) = (short)in_ECX[0x10] + -1;
    if (*(char *)((int)in_ECX + 0x9b) != '\0') {
      *(undefined2 *)((int)in_ECX + 0x3a) = 0;
    }
    iVar8 = FUN_009f74c0(*(undefined2 *)((int)in_ECX + 0x3a));
    in_ECX[0x11] = *(int *)(iVar8 + 0x10);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30);
    }
  }
  else {
    iVar7 = FUN_009f7c00(*(undefined2 *)((int)in_ECX + 0x3a),(short)in_ECX[0xe]);
    FUN_009f7a30(iVar8);
    FUN_009f5820(*(int *)(iVar8 + 0x10) + iVar7);
  }
  *(undefined1 *)(in_ECX + 0x2d) = 1;
  sVar5 = FUN_009f77c0();
  *(short *)(in_ECX + 0x10) = sVar5 + 1;
  if ((*(char *)((int)in_ECX + 0x9a) == '\0') && (*(short *)((int)in_ECX + 0x4a) != 0)) {
    while ((uVar1 = *(ushort *)(in_ECX + 0x10), uVar2 = *(ushort *)((int)in_ECX + 0x4a),
           iVar8 = (**(code **)(*(int *)in_ECX[0x1e] + 0x2c))(),
           (double)uVar2 / (double)iVar8 < (double)(int)(uVar1 - 1) ||
           ((in_ECX[0x27] != -1 && (in_ECX[0x27] < (int)(uint)*(ushort *)(in_ECX + 0x10)))))) {
      if (*(char *)((int)in_ECX + 0x9a) == '\0') {
        (**(code **)(*in_ECX + 0x9c))();
      }
    }
  }
  *(undefined1 *)((int)in_ECX + 0x4d) = 0;
  for (puVar3 = (undefined4 *)in_ECX[1]; puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)puVar3[2]) {
    (**(code **)(*(int *)*puVar3 + 8))();
  }
  return;
}

