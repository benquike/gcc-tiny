! Exercise combined OpenACC directives.

! { dg-do compile }
! { dg-options "-fopenacc -fdump-tree-gimple" }

! This error is temporary.  Remove when support is added for these clauses
! in the middle end.
! { dg-prune-output "sorry, unimplemented" }

! Update the reduction tests.

subroutine test
  implicit none
  integer a(100), i, j, z

  ! PARALLEL
  
  !$acc parallel loop collapse (2)
  do i = 1, 100
     do j = 1, 10
     end do
  end do
  !$acc end parallel loop
  
  !$acc parallel loop gang
  do i = 1, 100
  end do
  !$acc end parallel loop

  !$acc parallel loop worker
  do i = 1, 100
     do j = 1, 10
     end do
  end do
  !$acc end parallel loop

  !$acc parallel loop vector
  do i = 1, 100
     do j = 1, 10
     end do
  end do
  !$acc end parallel loop

  !$acc parallel loop seq
  do i = 1, 100
     do j = 1, 10
     end do
  end do
  !$acc end parallel loop

  !$acc parallel loop auto
  do i = 1, 100
     do j = 1, 10
     end do
  end do
  !$acc end parallel loop

  !$acc parallel loop tile (2, 3)
  do i = 1, 100
     do j = 1, 10
     end do
  end do
  !$acc end parallel loop

  !$acc parallel loop independent
  do i = 1, 100
  end do
  !$acc end parallel loop

  !$acc parallel loop private (z)
  do i = 1, 100
     z = 0
  end do
  !$acc end parallel loop

!  !$acc parallel loop reduction (+:z) copy (z)
!  do i = 1, 100
!  end do
!  !$acc end parallel loop

  ! KERNELS

  !$acc kernels loop collapse (2)
  do i = 1, 100
     do j = 1, 10
     end do
  end do
  !$acc end kernels loop
  
  !$acc kernels loop gang
  do i = 1, 100
  end do
  !$acc end kernels loop

  !$acc kernels loop worker
  do i = 1, 100
     do j = 1, 10
     end do
  end do
  !$acc end kernels loop

  !$acc kernels loop vector
  do i = 1, 100
     do j = 1, 10
     end do
  end do
  !$acc end kernels loop

  !$acc kernels loop seq
  do i = 1, 100
     do j = 1, 10
     end do
  end do
  !$acc end kernels loop

  !$acc kernels loop auto
  do i = 1, 100
     do j = 1, 10
     end do
  end do
  !$acc end kernels loop

  !$acc kernels loop tile (2, 3)
  do i = 1, 100
     do j = 1, 10
     end do
  end do
  !$acc end kernels loop

  !$acc kernels loop independent
  do i = 1, 100
  end do
  !$acc end kernels loop

  !$acc kernels loop private (z)
  do i = 1, 100
     z = 0
  end do
  !$acc end kernels loop

!  !$acc kernels loop reduction (+:z) copy (z)
!  do i = 1, 100
!  end do
!  !$acc end kernels loop
end subroutine test

! { dg-final { scan-tree-dump-times "acc loop private.i. private.j. collapse.2." 2 "gimple" } }
! { dg-final { scan-tree-dump-times "acc loop private.i. gang" 2 "gimple" } }
! { dg-final { scan-tree-dump-times "acc loop private.i. private.j. worker" 2 "gimple" } }
! { dg-final { scan-tree-dump-times "acc loop private.i. private.j. vector" 2 "gimple" } }
! { dg-final { scan-tree-dump-times "acc loop private.i. private.j. seq" 2 "gimple" } }
! { dg-final { scan-tree-dump-times "acc loop private.i. private.j. auto" 2 "gimple" } }
! { dg-final { scan-tree-dump-times "acc loop private.i. private.j. tile.2, 3" 2 "gimple" } }
! { dg-final { scan-tree-dump-times "acc loop private.i. independent" 2 "gimple" } }
! { dg-final { scan-tree-dump-times "private.z" 2 "gimple" } }
