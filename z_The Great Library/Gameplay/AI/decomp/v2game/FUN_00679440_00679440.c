// FUN_00679440 @ 00679440 body=[[00679440, 00679555]]


void FUN_00679440(void)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int *unaff_ESI;
  float fVar5;
  undefined1 local_c [4];
  float local_8;
  
  piVar1 = *(int **)(unaff_ESI[0x65b] + 0x94);
  iVar2 = (**(code **)(*unaff_ESI + 0x54))();
  iVar2 = *(int *)(iVar2 + 8);
  psVar3 = (short *)(**(code **)(*piVar1 + 0xd8))(&local_8);
  piVar1 = *(int **)(unaff_ESI[0x65b] + 0x94);
  local_8 = (float)iVar2 / (float)(int)*psVar3;
  iVar2 = (**(code **)(*unaff_ESI + 0x54))();
  iVar2 = *(int *)(iVar2 + 0xc);
  iVar4 = (**(code **)(*piVar1 + 0xd8))(local_c);
  fVar5 = (float)iVar2 / (float)(int)*(short *)(iVar4 + 2);
  if (fVar5 < local_8) {
    fVar5 = local_8;
  }
  if (DAT_00f092fc < fVar5) {
    (**(code **)(*(int *)unaff_ESI[0x65b] + 0xfc))(fVar5);
  }
  (**(code **)(*(int *)unaff_ESI[0x58c] + 0x2c))();
  (**(code **)(*(int *)unaff_ESI[0x65b] + 0x124))();
  (**(code **)(*(int *)(unaff_ESI[0x58e] + 4) + 0x6c))();
  (**(code **)(*(int *)unaff_ESI[0x65b] + 0x34))();
  return;
}

