// FUN_004069c0 @ 004069c0 body=[[004069c0, 004069dc] [004069e0, 00406a53]]


void FUN_004069c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *unaff_EDI;
  
  iVar4 = param_1;
  piVar1 = (int *)(param_1 + 0x14);
  piVar2 = (int *)(param_1 + 0x10);
  param_1 = 0;
  if (0 < (int)(*piVar1 - *piVar2 & 0xfffffffcU)) {
    do {
      piVar1 = (int *)(*(int *)(iVar4 + 0x10) + param_1 * 4);
      if (*(char *)(*piVar1 + 0x164) != '\0') {
        piVar2 = (int *)unaff_EDI[1];
        if ((piVar1 < piVar2) && (piVar3 = (int *)*unaff_EDI, piVar3 <= piVar1)) {
          if (piVar2 == (int *)unaff_EDI[2]) {
            FUN_00a513f0();
          }
          if ((undefined4 *)unaff_EDI[1] != (undefined4 *)0x0) {
            *(undefined4 *)unaff_EDI[1] =
                 *(undefined4 *)(*unaff_EDI + ((int)piVar1 - (int)piVar3 >> 2) * 4);
          }
        }
        else {
          if (piVar2 == (int *)unaff_EDI[2]) {
            FUN_00a513f0();
          }
          if ((int *)unaff_EDI[1] != (int *)0x0) {
            *(int *)unaff_EDI[1] = *piVar1;
          }
        }
        unaff_EDI[1] = unaff_EDI[1] + 4;
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) >> 2);
  }
  return;
}

