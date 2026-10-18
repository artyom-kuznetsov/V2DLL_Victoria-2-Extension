// FUN_0069c520 @ 0069c520 body=[[0069c520, 0069c5ab] [0069c5af, 0069c602] [0069c606, 0069c662] [0069c666, 0069c6bb] [0069c6bf, 0069c6e1]]


/* WARNING: Removing unreachable block (ram,0x0069c6b2) */

void FUN_0069c520(void)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 local_34 [12];
  uint uStack_28;
  uint local_24;
  undefined4 local_20;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6a990;
  pvStack_14 = ExceptionList;
  local_24 = 0;
  local_34[0] = 0;
  local_20 = 0xf;
  if (*(int *)(*(int *)(unaff_ESI + 0x34) * 0x58 + *(int *)(unaff_ESI + 0x3c) + 0x40) == 0) {
    ExceptionList = &pvStack_14;
    FUN_00409350("ledger_linegraph_legend",0x17);
    local_c = 2;
    iVar1 = (**(code **)(**(int **)(unaff_ESI + 0x28) + 0x6c))(local_34);
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
    puStack_10 = (undefined1 *)0xffffffff;
    if (local_24 < 0x10) {
      FUN_00409350("ledger_linegraphs",0x11);
      puStack_10 = (undefined1 *)0x3;
      iVar1 = (**(code **)(**(int **)(unaff_ESI + 0x28) + 0x6c))(&stack0xffffffac);
      (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
      pvStack_14 = (void *)0xffffffff;
      FUN_0069c6f0(unaff_ESI);
      ExceptionList = pvStack_1c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_38);
  }
  ExceptionList = &pvStack_14;
  FUN_00409350("ledger_sort_buttons",0x13);
  local_c = 0;
  iVar1 = (**(code **)(**(int **)(unaff_ESI + 0x28) + 0x6c))(local_34);
  (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
  puStack_10 = (undefined1 *)0xffffffff;
  if (local_24 < 0x10) {
    local_24 = 0xf;
    uStack_28 = 0;
    uStack_38 = uStack_38 & 0xffffff00;
    FUN_00409350("default_listbox",0xf);
    puStack_10 = (undefined1 *)0x1;
    piVar2 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x28) + 0x7c))(&uStack_38);
    (**(code **)(*piVar2 + 0x54))();
    pvStack_14 = (void *)0xffffffff;
    if (uStack_28 < 0x10) {
      FUN_0069e250(unaff_ESI);
      ExceptionList = pvStack_1c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_3c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_38);
}

