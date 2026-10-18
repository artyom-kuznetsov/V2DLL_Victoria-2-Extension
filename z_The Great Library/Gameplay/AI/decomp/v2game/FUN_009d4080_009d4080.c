// FUN_009d4080 @ 009d4080 body=[[009d4080, 009d40bb] [009d40c0, 009d41a8] [009d41ac, 009d41c6]]


/* WARNING: Removing unreachable block (ram,0x009d40dc) */

void FUN_009d4080(int param_1,undefined4 *param_2,int param_3)

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
  if (*(char *)((int)puVar6[1] + 0x129) == '\0') {
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
    } while (*(char *)((int)puVar7 + 0x129) == '\0');
  }
  iVar3 = param_3;
  if (bVar8) {
    if (puVar6 == (undefined4 *)**(int **)(param_1 + 4)) {
      bVar8 = true;
      goto LAB_009d414f;
    }
    FUN_009d4390();
  }
  cVar4 = FUN_0098ab20();
  if (cVar4 == '\0') {
    FUN_009d1130();
    if (*(uint *)(iVar3 + 0x20) < 0x10) {
      *(undefined4 *)(iVar3 + 0x20) = 0xf;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined1 *)(iVar3 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(iVar3 + 0xc));
  }
LAB_009d414f:
  puVar6 = (undefined4 *)FUN_009d41e0(&param_3,bVar8,iVar3);
  *param_2 = *puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

