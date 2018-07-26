import unittest


class TestVirtualenvCatkinAddNosetests(unittest.TestCase):

    def test_basic(self):
        import transitions
        self.assertTrue(transitions)
