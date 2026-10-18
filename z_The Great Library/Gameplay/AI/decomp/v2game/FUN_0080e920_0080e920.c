// FUN_0080e920 @ 0080e920 body=[[0080e920, 0080ea0b]]


void FUN_0080e920(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *in_EAX;
  uint uVar5;
  int in_ECX;
  uint uVar6;
  undefined4 *puVar7;
  
  if ((undefined4 *)*in_EAX != (undefined4 *)0x0) {
    puVar1 = (uint *)(in_ECX + 8);
    puVar7 = (undefined4 *)*in_EAX;
    do {
      puVar2 = *(undefined4 **)(in_ECX + 0xc);
      puVar3 = (undefined4 *)puVar7[2];
      if ((puVar7 < puVar2) && (puVar4 = (undefined4 *)*puVar1, puVar4 <= puVar7)) {
        if (puVar2 == *(undefined4 **)(in_ECX + 0x10)) {
          uVar5 = (int)puVar2 - (int)puVar4 >> 2;
          if (0x3ffffffe < uVar5) {
LAB_0080ea02:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar5 = uVar5 + 1;
          uVar6 = (int)*(undefined4 **)(in_ECX + 0x10) - (int)puVar4 >> 2;
          if (uVar6 < uVar5) {
            if (0x3fffffff - (uVar6 >> 1) < uVar6) {
              uVar6 = 0;
            }
            else {
              uVar6 = uVar6 + (uVar6 >> 1);
            }
            if (uVar6 < uVar5) {
              uVar6 = uVar5;
            }
            FUN_004bf300(uVar6);
          }
        }
        if (*(undefined4 **)(in_ECX + 0xc) != (undefined4 *)0x0) {
          **(undefined4 **)(in_ECX + 0xc) =
               *(undefined4 *)(*puVar1 + ((int)puVar7 - (int)puVar4 >> 2) * 4);
        }
      }
      else {
        if (puVar2 == *(undefined4 **)(in_ECX + 0x10)) {
          uVar5 = (int)((int)puVar2 - *puVar1) >> 2;
          if (0x3ffffffe < uVar5) goto LAB_0080ea02;
          uVar5 = uVar5 + 1;
          uVar6 = (int)((int)*(undefined4 **)(in_ECX + 0x10) - *puVar1) >> 2;
          if (uVar6 < uVar5) {
            if (0x3fffffff - (uVar6 >> 1) < uVar6) {
              uVar6 = 0;
            }
            else {
              uVar6 = uVar6 + (uVar6 >> 1);
            }
            if (uVar6 < uVar5) {
              uVar6 = uVar5;
            }
            FUN_004bf300(uVar6);
          }
        }
        if (*(undefined4 **)(in_ECX + 0xc) != (undefined4 *)0x0) {
          **(undefined4 **)(in_ECX + 0xc) = *puVar7;
        }
      }
      *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 4;
      puVar7 = puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  return;
}

