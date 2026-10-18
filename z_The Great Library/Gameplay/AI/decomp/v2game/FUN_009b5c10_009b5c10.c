// FUN_009b5c10 @ 009b5c10 body=[[009b5c10, 009b5c3c]]


void FUN_009b5c10(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x4f) = 1;
  (**(code **)(**(int **)(in_ECX + 0x110) + 0x34))();
  if (*(char *)(in_ECX + 0x164) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x009b5c39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x114) + 0x34))();
    return;
  }
  return;
}

