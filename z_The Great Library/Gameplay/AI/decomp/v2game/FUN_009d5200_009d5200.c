// FUN_009d5200 @ 009d5200 body=[[009d5200, 009d52f9]]


/* WARNING: Removing unreachable block (ram,0x009d5251) */

void FUN_009d5200(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int unaff_EDI;
  bool bVar7;
  
  do {
    iVar6 = param_1 * 2 + 2;
    if (param_2 <= iVar6) {
      if (iVar6 == param_2) {
        *(undefined4 *)(unaff_EDI + param_1 * 8) = *(undefined4 *)(unaff_EDI + -8 + param_2 * 8);
        *(undefined4 *)(unaff_EDI + 4 + param_1 * 8) = *(undefined4 *)(unaff_EDI + -4 + param_2 * 8)
        ;
      }
      FUN_009d5300();
      return;
    }
    iVar1 = *(int *)(unaff_EDI + iVar6 * 8);
    iVar2 = *(int *)(unaff_EDI + -8 + iVar6 * 8);
    if (iVar1 == iVar2) {
      uVar3 = *(uint *)(*(int *)(unaff_EDI + 4 + iVar6 * 8) + 0x18);
      uVar4 = *(uint *)(*(int *)(unaff_EDI + -4 + iVar6 * 8) + 0x18);
      uVar5 = uVar3;
      if (uVar4 < uVar3) {
        uVar5 = uVar4;
      }
      uVar5 = FUN_00414bd0(uVar5);
      if (uVar5 == 0) {
        if (uVar4 < uVar3) {
          bVar7 = true;
          goto LAB_009d52a2;
        }
        uVar5 = (uint)(uVar4 != uVar3);
      }
      bVar7 = (int)uVar5 < 0;
    }
    else {
      bVar7 = iVar2 < iVar1;
    }
LAB_009d52a2:
    if (bVar7) {
      iVar6 = param_1 * 2 + 1;
    }
    *(undefined4 *)(unaff_EDI + param_1 * 8) = *(undefined4 *)(unaff_EDI + iVar6 * 8);
    *(undefined4 *)(unaff_EDI + 4 + param_1 * 8) = *(undefined4 *)(unaff_EDI + 4 + iVar6 * 8);
    param_1 = iVar6;
  } while( true );
}

