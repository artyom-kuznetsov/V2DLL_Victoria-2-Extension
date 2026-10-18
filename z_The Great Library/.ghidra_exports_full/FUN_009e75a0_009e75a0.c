// FUN_009e75a0 @ 009e75a0 body=[[009e75a0, 009e7624]]


void FUN_009e75a0(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int unaff_ESI;
  undefined4 unaff_EDI;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  cVar1 = FUN_00416db0();
  if (cVar1 == '\0') {
    FUN_00408ed0(unaff_EDI,0,0xffffffff);
    (**(code **)(**(int **)(unaff_ESI + 0x138) + 0x3c))(unaff_ESI + 0x11c);
    uVar2 = (uint)*(byte *)(unaff_ESI + 0xd4);
    uVar8 = *(undefined4 *)(unaff_ESI + 0xbc);
    uVar9 = 0;
    uVar7 = *(undefined4 *)(unaff_ESI + 0xb8);
    uVar3 = (uint)*(ushort *)(unaff_ESI + 0xb4);
    uVar6 = 0;
    iVar5 = unaff_ESI + 0x98;
    iVar4 = unaff_ESI + 0x7c;
    (**(code **)(**(int **)(unaff_ESI + 0x58) + 0xf0))(*(undefined4 *)(unaff_ESI + 0x54));
                    /* WARNING: Could not recover jumptable at 0x009e7621. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(unaff_ESI + 0x138) + 0x44))
              (iVar4,iVar5,uVar3,uVar6,uVar7,uVar8,uVar9,uVar2);
    return;
  }
  return;
}

