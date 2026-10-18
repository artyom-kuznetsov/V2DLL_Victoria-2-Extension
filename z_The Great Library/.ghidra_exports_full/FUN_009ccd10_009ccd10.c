// FUN_009ccd10 @ 009ccd10 body=[[009ccd10, 009ccea3]]


void FUN_009ccd10(void)

{
  float fVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  ushort *puVar5;
  short *psVar6;
  int unaff_ESI;
  undefined8 local_1c;
  undefined1 local_14 [4];
  uint local_10;
  short local_c;
  undefined2 local_a;
  short local_8;
  undefined2 local_6;
  
  if (*(short *)(unaff_ESI + 0x244) == 0) {
    iVar4 = (**(code **)(**(int **)(unaff_ESI + 0x1a8) + 0x3c))(&local_10);
    local_1c = (double)(int)*(short *)(iVar4 + 2) + (double)*(float *)(unaff_ESI + 0xa8);
    iVar4 = (**(code **)(**(int **)(unaff_ESI + 0x1a8) + 0xf4))(&local_c);
    local_6 = (undefined2)(int)((double)(int)*(short *)(iVar4 + 2) + local_1c);
    local_8 = (short)(int)*(float *)(unaff_ESI + 0xa4);
  }
  else {
    psVar3 = (short *)(**(code **)(**(int **)(unaff_ESI + 0x154) + 0x3c))();
    local_1c = (double)*(float *)(unaff_ESI + 0xa4) + (double)(int)*psVar3;
    psVar3 = (short *)(**(code **)(**(int **)(unaff_ESI + 0x154) + 0xf4))(&local_c);
    local_8 = (short)(int)((double)(int)*psVar3 + local_1c);
    local_6 = (undefined2)(int)*(float *)(unaff_ESI + 0xa8);
  }
  if (*(char *)(unaff_ESI + 0x38c) == '\0') {
    psVar3 = &local_8;
  }
  else {
    iVar4 = *(int *)(unaff_ESI + 0x78);
    fVar1 = *(float *)(unaff_ESI + 0xa8);
    iVar2 = *(int *)(iVar4 + 0x6b9c0);
    local_1c = *(double *)(iVar4 + 0x6b9bc);
    iVar4 = *(int *)(iVar4 + 0x6b9bc);
    puVar5 = (ushort *)(**(code **)(**(int **)(unaff_ESI + 0x154) + 0xf4))(local_14);
    local_10 = (uint)*puVar5;
    psVar6 = (short *)(**(code **)(**(int **)(unaff_ESI + 0x154) + 0x60))((int)&local_1c + 4);
    psVar3 = &local_c;
    local_c = (short)(iVar4 / 2) + *psVar6 + (short)local_10 + local_8;
    local_a = (short)(int)((float)(iVar2 / 2) + fVar1);
  }
  (**(code **)(**(int **)(unaff_ESI + 0xac) + 0x118))(psVar3);
  return;
}

