// thunk_FUN_0066ee60 @ 00658fb0 body=[[00658fb0, 00658fb4]]


void thunk_FUN_0066ee60(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  if ((*(char *)(*(int *)(in_ECX + 0x163c) + 0xc) == '\0') && (*(int *)(in_ECX + 0x1608) == 2)) {
    uVar1 = *(undefined4 *)(*(undefined4 **)(in_ECX + 0x1600))[2];
    iVar2 = *(int *)(in_ECX + 0x163c);
    *(undefined4 *)(iVar2 + 4) = **(undefined4 **)(in_ECX + 0x1600);
    *(undefined4 *)(iVar2 + 8) = uVar1;
    FUN_007956d0();
                    /* WARNING: Could not recover jumptable at 0x0066eeaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x163c) + 0x2c))();
    return;
  }
  return;
}

