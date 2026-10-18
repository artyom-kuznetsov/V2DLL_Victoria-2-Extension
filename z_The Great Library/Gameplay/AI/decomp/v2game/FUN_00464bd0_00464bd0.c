// FUN_00464bd0 @ 00464bd0 body=[[00464bd0, 00464ce8]]


void FUN_00464bd0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  undefined4 local_8;
  
  iVar5 = *(int *)(in_ECX + 0x58) - *(int *)(in_ECX + 0x54);
  uVar3 = DAT_01259abc;
  do {
    DAT_01259abc = uVar3;
    if (param_1 < iVar5 >> 2) {
      *(undefined4 *)(*(int *)(in_ECX + 0x54) + param_1 * 4) = param_2;
      return;
    }
    puVar1 = *(undefined4 **)(in_ECX + 0x58);
    local_8 = uVar3;
    if (&local_8 < puVar1) {
      puVar2 = *(undefined4 **)(in_ECX + 0x54);
      if (&local_8 < puVar2) goto LAB_00464c69;
      if (puVar1 == *(undefined4 **)(in_ECX + 0x5c)) {
        uVar4 = (int)puVar1 - (int)puVar2 >> 2;
        if (0x3ffffffe < uVar4) goto LAB_00464cdf;
        uVar4 = uVar4 + 1;
        uVar6 = (int)*(undefined4 **)(in_ECX + 0x5c) - (int)puVar2 >> 2;
        if (uVar6 < uVar4) {
          if (0x3fffffff - (uVar6 >> 1) < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < uVar4) {
            uVar6 = uVar4;
          }
          FUN_00435b80(uVar6);
        }
      }
      if (*(undefined4 **)(in_ECX + 0x58) != (undefined4 *)0x0) {
        **(undefined4 **)(in_ECX + 0x58) =
             *(undefined4 *)(*(int *)(in_ECX + 0x54) + ((int)&local_8 - (int)puVar2 >> 2) * 4);
      }
    }
    else {
LAB_00464c69:
      if (puVar1 == *(undefined4 **)(in_ECX + 0x5c)) {
        uVar4 = (int)puVar1 - *(int *)(in_ECX + 0x54) >> 2;
        if (0x3ffffffe < uVar4) {
LAB_00464cdf:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar4 = uVar4 + 1;
        uVar6 = (int)*(undefined4 **)(in_ECX + 0x5c) - *(int *)(in_ECX + 0x54) >> 2;
        if (uVar6 < uVar4) {
          if (0x3fffffff - (uVar6 >> 1) < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < uVar4) {
            uVar6 = uVar4;
          }
          FUN_00435b80(uVar6);
        }
      }
      if (*(undefined4 **)(in_ECX + 0x58) != (undefined4 *)0x0) {
        **(undefined4 **)(in_ECX + 0x58) = uVar3;
      }
    }
    *(int *)(in_ECX + 0x58) = *(int *)(in_ECX + 0x58) + 4;
    iVar5 = *(int *)(in_ECX + 0x58) - *(int *)(in_ECX + 0x54);
    uVar3 = DAT_01259abc;
  } while( true );
}

