open Ava.Async;

test("Async.test", t =>
  t.cb()
);
after(t => t.cb());
after_always(t => t.cb());
after_each(t => t.cb());
after_each_always(t => t.cb());
before(t => t.cb());
before_each(t => t.cb());
todo("Async.todo");