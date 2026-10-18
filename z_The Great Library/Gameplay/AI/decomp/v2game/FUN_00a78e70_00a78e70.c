// FUN_00a78e70 @ 00a78e70 body=[[00a78e70, 00a78ea8] [00a78eb0, 00a78faf] [00a78fb3, 00a78fcc]]


/* WARNING: Removing unreachable block (ram,0x00a78ecc) */

void FUN_00a78e70(int param_1,undefined4 *param_2,int param_3)

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
  if (*(char *)((int)puVar6[1] + 0x41) == '\0') {
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
    } while (*(char *)((int)puVar7 + 0x41) == '\0');
  }
  if (bVar8) {
    if (puVar6 == (undefined4 *)**(int **)(param_1 + 4)) {
      puVar6 = (undefined4 *)FUN_00a78ff0(&param_3,1,param_3);
      *param_2 = *puVar6;
      *(undefined1 *)(param_2 + 1) = 1;
      return;
    }
    FUN_00a79190();
  }
  iVar3 = param_3;
  cVar4 = FUN_0098ab20();
  if (cVar4 == '\0') {
    if (*(uint *)(iVar3 + 0x20) < 0x10) {
      *(undefined4 *)(iVar3 + 0x20) = 0xf;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined1 *)(iVar3 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(iVar3 + 0xc));
  }
  puVar6 = (undefined4 *)FUN_00a78ff0(&param_3,bVar8,iVar3);
  *param_2 = *puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

