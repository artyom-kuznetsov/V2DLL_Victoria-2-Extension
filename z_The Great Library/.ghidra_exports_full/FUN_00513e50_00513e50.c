// FUN_00513e50 @ 00513e50 body=[[00513e50, 00513f2d]]


uint FUN_00513e50(void)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  int *local_c;
  int local_8;
  
  piVar1 = (int *)*in_EAX;
  iVar4 = *piVar1;
  local_8 = 0;
  local_c = (int *)0x0;
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    do {
      piVar3 = piVar1;
      piVar1 = (int *)piVar3[2];
      iVar2 = *piVar3;
      if (local_c == (int *)0x0) {
        piVar3 = *(int **)(iVar2 + 0xc4);
        local_c = piVar3;
      }
      else if (local_c != *(int **)(iVar2 + 0xc4)) goto LAB_00513f25;
      if ((((*(int *)(iVar2 + 0x74) != 0) || (*(char *)(iVar2 + 0x104) != '\0')) ||
          (0 < *(int *)(iVar2 + 0xec))) ||
         ((*(int *)(iVar2 + 0x194) != 0 || (*(int *)(iVar2 + 0xdc) != *(int *)(iVar4 + 0xdc)))))
      goto LAB_00513f25;
      piVar3 = *(int **)(iVar2 + 0x38);
      do {
        if (piVar3 == (int *)0x0) {
          bVar5 = 0 < *(int *)(iVar2 + 0x40);
          goto LAB_00513efb;
        }
        iVar4 = *piVar3;
        piVar3 = (int *)piVar3[2];
      } while (*(char *)(*(int *)(iVar4 + 0x38) + 0x40) != '\0');
      bVar5 = false;
LAB_00513efb:
      uVar6 = FUN_005d9080();
      iVar4 = (int)((ulonglong)uVar6 >> 0x20);
      piVar3 = (int *)uVar6;
      if (bVar5 != (bool)(char)uVar6) goto LAB_00513f25;
      piVar3 = *(int **)(iVar2 + 0x40);
      local_8 = local_8 + (int)piVar3;
    } while (piVar1 != (int *)0x0);
    if (local_8 == 2) {
LAB_00513f25:
      return (uint)piVar3 & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)piVar3 >> 8),1);
}

