// FUN_00adbdb0 @ 00adbdb0 body=[[00adbdb0, 00adbe13]]


void FUN_00adbdb0(int param_1)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  
  iVar5 = param_1;
  fVar7 = (float10)FUN_00ada3d0(param_1);
  fVar1 = (float)fVar7;
  uVar3 = *(uint *)(iVar5 + 0x48);
  uVar6 = 0;
  if (uVar3 != 0) {
    do {
      piVar4 = *(int **)(*(int *)(iVar5 + 0x44) + uVar6 * 4);
      uVar2 = *(ushort *)(piVar4 + 1);
      if ((uVar2 != 0) && ((float10)*(float *)(*piVar4 + -4 + (uint)uVar2 * 8) < fVar7)) {
        param_1 = 0;
        FUN_00adce10((float)fVar7,&param_1);
        fVar7 = (float10)fVar1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  return;
}

