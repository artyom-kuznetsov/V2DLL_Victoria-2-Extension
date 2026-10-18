// FUN_009d3d20 @ 009d3d20 body=[[009d3d20, 009d3d5c] [009d3d60, 009d3d77] [009d3d87, 009d3d8e]]


void FUN_009d3d20(int param_1)

{
  if (*(char *)(param_1 + 0x129) != '\0') {
    return;
  }
  FUN_009d3d20(*(undefined4 *)(param_1 + 8));
  FUN_009d1130();
  if (0xf < *(uint *)(param_1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x20) = 0xf;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1);
}

