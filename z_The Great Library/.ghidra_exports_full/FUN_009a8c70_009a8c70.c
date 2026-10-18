// FUN_009a8c70 @ 009a8c70 body=[[009a8c70, 009a8c87]]


void FUN_009a8c70(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x143) == '\0') {
    *(undefined1 *)(in_ECX + 0x4f) = 1;
                    /* WARNING: Could not recover jumptable at 0x009a8c85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x70) + 0x34))();
    return;
  }
  return;
}

