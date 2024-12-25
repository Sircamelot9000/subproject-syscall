# -*- perl -*-
use strict;
use warnings;
use tests::tests;

check_expected ([<<'EOF', <<'EOF']);
report_mem_usage_test: Initial memory usage: 0 bytes
report_mem_usage_test: Memory usage after malloc(4096): 4096 bytes
report_mem_usage_test: Memory usage after free: 0 bytes
EOF
pass;
