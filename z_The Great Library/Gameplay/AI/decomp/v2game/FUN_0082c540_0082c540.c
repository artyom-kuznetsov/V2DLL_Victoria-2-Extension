// FUN_0082c540 @ 0082c540 body=[[0082c540, 0082c639] [0082c640, 0082c6d3]]


int FUN_0082c540(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *in_EAX;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = DAT_012588e8;
  if (((0 < in_EAX[0x2d]) && (iVar5 = *(int *)in_EAX[0x2b], iVar5 != 0)) &&
     (*(int *)(iVar5 + 0xa0) < 1)) {
    iVar4 = FUN_00828e30();
    if (((*(int *)(*(int *)(iVar5 + 0xdc) + 300) == 0) ||
        (iVar1 = *(int *)(*(int *)(iVar5 + 0xdc) + 0xe8), iVar1 == 0)) ||
       (*(char *)(iVar5 + 0x164) != '\0')) {
      return iVar4;
    }
    if (((iVar4 != 0) && (cVar3 = FUN_0048f070(iVar1,1), cVar3 == '\0')) &&
       ((cVar3 = FUN_0048f070(*(undefined4 *)(*(int *)(iVar5 + 0xdc) + 0xe8),0), cVar3 == '\0' &&
        (((iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0xacc) + in_EAX[0x37] * 4) + 0xe8), iVar2 != 0
          && (iVar5 = *(int *)(*(int *)(iVar5 + 0xdc) + 0xe8), iVar2 != iVar5)) &&
         (cVar3 = FUN_004e0ac0(), cVar3 == '\0')))))) {
      iVar2 = *(int *)(iVar5 + 0x14);
      do {
        if (iVar2 == 0) {
          local_c = 0;
          local_8 = 0;
          cVar3 = FUN_00828ab0(iVar4,&local_c,&local_8);
          if ((cVar3 == '\0') && (cVar3 = FUN_00828bb0(iVar4), cVar3 == '\0')) {
            return 0;
          }
          return iVar4;
        }
        iVar2 = *(int *)(iVar2 + 8);
        iVar5 = (**(code **)(*in_EAX + 0xe8))();
        local_8 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x38) * 4);
        puVar6 = (undefined4 *)FUN_0048e120();
        cVar3 = FUN_0085fa00(*puVar6,puVar6[1]);
      } while (cVar3 == '\0');
    }
  }
  return 0;
}

