// FUN_0047ddb0 @ 0047ddb0 body=[[0047ddb0, 0047de55]]


void FUN_0047ddb0(int param_1)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EDI;
  undefined8 uVar9;
  int local_8;
  
  local_8 = 0;
  if (0 < DAT_012587f4) {
    do {
      bVar2 = *(byte *)(unaff_EDI + 8 + local_8);
      if (bVar2 != 0) {
        bVar3 = *(byte *)(local_8 + 8 + param_1);
        if (bVar3 == 0) {
          puVar4 = *(undefined4 **)(unaff_EDI + 0x48);
          puVar4[(uint)bVar2 * 2] = *puVar4;
          puVar4[(uint)bVar2 * 2 + 1] = puVar4[1];
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x48) + (uint)bVar3 * 8);
          iVar6 = *(int *)(*(int *)(param_1 + 0x48) + 4 + (uint)bVar3 * 8);
          uVar8 = (uint)bVar2;
          if (iVar5 == 0 && iVar6 == 0) {
            iVar5 = *(int *)(unaff_EDI + 0x48);
            *(undefined4 *)(iVar5 + uVar8 * 8) = 0;
            *(undefined4 *)(iVar5 + 4 + uVar8 * 8) = 0;
          }
          else {
            puVar1 = (uint *)(*(int *)(unaff_EDI + 0x48) + uVar8 * 8);
            uVar7 = *puVar1;
            uVar9 = __alldiv(uVar7 << 0xf,
                             *(int *)(*(int *)(unaff_EDI + 0x48) + 4 + uVar8 * 8) << 0xf |
                             uVar7 >> 0x11,iVar5,iVar6);
            *(undefined8 *)puVar1 = uVar9;
          }
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < DAT_012587f4);
  }
  return;
}

