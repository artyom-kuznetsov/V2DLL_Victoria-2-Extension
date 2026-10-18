// FUN_00406b00 @ 00406b00 body=[[00406b00, 00406b26] [00406b30, 00406b79] [00406b7d, 00406bf6]]


void FUN_00406b00(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *unaff_EDI;
  undefined4 local_2c;
  uint local_18;
  int local_10;
  
  bVar4 = false;
  local_10 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) & 0xfffffffcU)) {
    do {
      iVar5 = *(int *)(local_10 * 4 + *(int *)(param_1 + 0x40));
      if (*(char *)(iVar5 + 0x1c4) == '\0') {
LAB_00406b5d:
        bVar3 = false;
      }
      else {
        iVar5 = FUN_00401580(iVar5);
        bVar4 = true;
        bVar3 = true;
        if (*(int *)(iVar5 + 0x10) != 0) goto LAB_00406b5d;
      }
      if ((bVar4) && (bVar4 = false, 0xf < local_18)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c);
      }
      if (bVar3) {
        puVar1 = (undefined4 *)unaff_EDI[1];
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x40) + local_10 * 4);
        if ((puVar6 < puVar1) && (puVar2 = (undefined4 *)*unaff_EDI, puVar2 <= puVar6)) {
          if (puVar1 == (undefined4 *)unaff_EDI[2]) {
            FUN_00a513f0();
          }
          if ((undefined4 *)unaff_EDI[1] != (undefined4 *)0x0) {
            *(undefined4 *)unaff_EDI[1] =
                 *(undefined4 *)(*unaff_EDI + ((int)puVar6 - (int)puVar2 >> 2) * 4);
          }
        }
        else {
          if (puVar1 == (undefined4 *)unaff_EDI[2]) {
            FUN_00a513f0();
          }
          if ((undefined4 *)unaff_EDI[1] != (undefined4 *)0x0) {
            *(undefined4 *)unaff_EDI[1] = *puVar6;
          }
        }
        unaff_EDI[1] = unaff_EDI[1] + 4;
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2);
  }
  return;
}

