// FUN_009d92f0 @ 009d92f0 body=[[009d92f0, 009d93a2]]


void FUN_009d92f0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *unaff_ESI;
  int iVar9;
  
  FUN_009d9510();
  iVar5 = *unaff_ESI;
  uVar7 = 0;
  if (unaff_ESI[1] - iVar5 >> 5 != 0) {
    iVar9 = 0;
    iVar8 = 0;
    do {
      fVar1 = *(float *)(param_1 + 0x178);
      piVar6 = (int *)(iVar5 + iVar8);
      iVar2 = piVar6[5];
      iVar3 = *piVar6;
      iVar4 = *(int *)(param_1 + 0x150);
      *(ulonglong *)(iVar4 + iVar9) = CONCAT44(piVar6[4],*(undefined4 *)(iVar5 + 0xc + iVar8));
      *(ulonglong *)(iVar4 + 8 + iVar9) = CONCAT44((float)iVar3 / fVar1,iVar2);
      iVar5 = *unaff_ESI;
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x20;
      iVar9 = iVar9 + 0x10;
    } while (uVar7 < (uint)(unaff_ESI[1] - iVar5 >> 5));
  }
  return;
}

