// FUN_004630d0 @ 004630d0 body=[[004630d0, 00463108] [00463110, 004631f2]]


/* WARNING: Removing unreachable block (ram,0x0046312c) */

void FUN_004630d0(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  puVar6 = *(undefined4 **)(param_1 + 4);
  bVar8 = true;
  if (*(char *)((int)puVar6[1] + 0x39) == '\0') {
    uVar1 = *(uint *)(param_3 + 0x1c);
    puVar7 = (undefined4 *)puVar6[1];
    do {
      puVar6 = puVar7;
      uVar2 = puVar6[7];
      uVar5 = uVar1;
      if (uVar2 <= uVar1) {
        uVar5 = uVar2;
      }
      uVar5 = FUN_00414bd0(uVar5);
      if (uVar5 == 0) {
        if (uVar1 < uVar2) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar1 != uVar2);
        }
      }
      bVar8 = (int)uVar5 < 0;
      if (bVar8) {
        puVar7 = (undefined4 *)*puVar6;
      }
      else {
        puVar7 = (undefined4 *)puVar6[2];
      }
    } while (*(char *)((int)puVar7 + 0x39) == '\0');
  }
  iVar3 = param_3;
  if (bVar8) {
    if (puVar6 == (undefined4 *)**(int **)(param_1 + 4)) {
      bVar8 = true;
      goto LAB_0046319c;
    }
    FUN_004639b0();
  }
  cVar4 = FUN_0098ab20();
  if (cVar4 == '\0') {
    FUN_00462d20();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
LAB_0046319c:
  puVar6 = (undefined4 *)FUN_00463210(&param_3,bVar8,iVar3);
  *param_2 = *puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

