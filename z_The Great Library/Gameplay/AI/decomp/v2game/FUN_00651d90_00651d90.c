// FUN_00651d90 @ 00651d90 body=[[00651d90, 00651e95]]


undefined4 FUN_00651d90(void)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  float10 extraout_ST0;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  float local_c;
  float local_8;
  
  if ((*(char *)(unaff_ESI + 0x15fc) != '\0') && (*(char *)(unaff_ESI + 0x70) != '\0')) {
    iVar1 = (**(code **)(**(int **)(unaff_ESI + 0x58) + 0x4c))(local_14);
    iVar1 = *(int *)(iVar1 + 4);
    piVar2 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x58) + 0x4c))(local_1c);
    local_c = (float)*piVar2;
    local_8 = (float)iVar1;
    FUN_004a1bb0(DAT_0125870c,&local_28,&local_c,1);
    local_28 = local_28 - *(float *)(unaff_ESI + 0x15f0);
    local_24 = local_24 - *(float *)(unaff_ESI + 0x15f4);
    local_20 = local_20 - *(float *)(unaff_ESI + 0x15f8);
    FUN_00401030(local_28 * local_28 + local_24 * local_24 + local_20 * local_20);
    if ((float10)DAT_00f17b54 <= extraout_ST0) {
      return 1;
    }
  }
  return 0;
}

