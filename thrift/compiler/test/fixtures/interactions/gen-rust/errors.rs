// @generated by Thrift for thrift/compiler/test/fixtures/interactions/src/module.thrift
// This file is probably not the place you want to edit!

//! Thrift error definitions for `module`.

/// Error definitions for `MyInteraction`.
pub mod my_interaction {

    pub trait AsCustomException {
        fn as_custom_exception(&self) -> Option<&crate::types::CustomException>;
    }

    impl AsCustomException for ::anyhow::Error {
        fn as_custom_exception(&self) -> Option<&crate::types::CustomException> {
            for cause in self.chain() {
                if let Some(FrobnicateError::ex(e)) = cause.downcast_ref::<FrobnicateError>() {
                    return Some(e);
                }
            }
            None
        }
    }

    /// Errors for frobnicate (client side).
    #[derive(Debug)]
    pub enum FrobnicateError {
        ex(crate::types::CustomException),
        ApplicationException(::fbthrift::ApplicationException),
        ThriftError(::anyhow::Error),
    }

    /// Human-readable string representation of the Thrift client error.
    ///
    /// By default, this will not print the full cause chain. If you would like to print the underlying error
    /// cause, either use `format!("{:?}", anyhow::Error::from(client_err))` or print this using the
    /// alternate formatter `{:#}` instead of just `{}`.
    impl ::std::fmt::Display for FrobnicateError {
        fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::result::Result<(), ::std::fmt::Error> {
            match self {
                Self::ex(inner) => {
                    if f.alternate() {
                        write!(f, "MyInteraction::frobnicate failed with variant `ex`: {:#}", inner)?;
                    } else {
                        write!(f, "MyInteraction::frobnicate failed with ex(CustomException)")?;
                    }
                }
                Self::ApplicationException(inner) => {
                    write!(f, "MyInteraction::frobnicate failed with ApplicationException")?;

                    if f.alternate() {
                      write!(f, ": {:#}", inner)?;
                    }
                }
                Self::ThriftError(inner) => {
                    write!(f, "MyInteraction::frobnicate failed with ThriftError")?;

                    if f.alternate() {
                      write!(f, ": {:#}", inner)?;
                    }
                }
            }

            Ok(())
        }
    }

    impl ::std::error::Error for FrobnicateError {
        fn source(&self) -> ::std::option::Option<&(dyn ::std::error::Error + 'static)> {
            match self {
                Self::ex(ref inner) => {
                    Some(inner)
                }
                Self::ApplicationException(ref inner) => {
                    Some(inner)
                }
                Self::ThriftError(ref inner) => {
                    Some(inner.as_ref())
                }
            }
        }
    }

    impl ::std::convert::From<crate::types::CustomException> for FrobnicateError {
        fn from(e: crate::types::CustomException) -> Self {
            Self::ex(e)
        }
    }

    impl AsCustomException for FrobnicateError {
        fn as_custom_exception(&self) -> Option<&crate::types::CustomException> {
            match self {
                Self::ex(inner) => Some(inner),
                _ => None,
            }
        }
    }

    impl ::std::convert::From<::anyhow::Error> for FrobnicateError {
        fn from(err: ::anyhow::Error) -> Self {
            Self::ThriftError(err)
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for FrobnicateError {
        fn from(ae: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(ae)
        }
    }
    impl ::std::convert::From<crate::services::my_interaction::FrobnicateExn> for
        ::std::result::Result<::std::primitive::i32, FrobnicateError>
    {
        fn from(e: crate::services::my_interaction::FrobnicateExn) -> Self {
            match e {
                crate::services::my_interaction::FrobnicateExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::my_interaction::FrobnicateExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(FrobnicateError::ApplicationException(aexn)),
                crate::services::my_interaction::FrobnicateExn::ex(exn) =>
                    ::std::result::Result::Err(FrobnicateError::ex(exn)),
            }
        }
    }

    pub type PingError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_interaction::PingExn> for
        ::std::result::Result<(), PingError>
    {
        fn from(e: crate::services::my_interaction::PingExn) -> Self {
            match e {
                crate::services::my_interaction::PingExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::my_interaction::PingExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(PingError::ApplicationException(aexn)),
            }
        }
    }

    pub type TruthifyError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_interaction::TruthifyExn> for
        ::std::result::Result<::futures::stream::BoxStream<'static, ::std::result::Result<::std::primitive::bool, crate::errors::my_interaction::TruthifyStreamError>>, TruthifyError>
    {
        fn from(e: crate::services::my_interaction::TruthifyExn) -> Self {
            match e {
                crate::services::my_interaction::TruthifyExn::Success(res) => {
                    use ::futures::stream::StreamExt;
                    let stream = res;
                    ::std::result::Result::Ok(stream.map(|res| match res {
                        ::std::result::Result::Ok(item) => ::std::result::Result::Ok(item),
                        ::std::result::Result::Err(exn) => exn.into(),
                    }).boxed())
                }
                crate::services::my_interaction::TruthifyExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(TruthifyError::ApplicationException(aexn)),
            }
        }
    }

    impl ::std::convert::From<crate::services::my_interaction::TruthifyResponseExn> for
        ::std::result::Result<(), TruthifyError>
    {
        fn from(e: crate::services::my_interaction::TruthifyResponseExn) -> Self {
            match e {
                crate::services::my_interaction::TruthifyResponseExn::Success(res) =>
                    ::std::result::Result::Ok(res),
                crate::services::my_interaction::TruthifyResponseExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(TruthifyError::ApplicationException(aexn)),
            }
        }
    }

    pub type TruthifyStreamError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_interaction::TruthifyStreamExn> for
        ::std::result::Result<::std::primitive::bool, TruthifyStreamError>
    {
        fn from(e: crate::services::my_interaction::TruthifyStreamExn) -> Self {
            match e {
                crate::services::my_interaction::TruthifyStreamExn::Success(res) =>
                    ::std::result::Result::Ok(res),
                crate::services::my_interaction::TruthifyStreamExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(TruthifyStreamError::ApplicationException(aexn)),
            }
        }
    }

    pub type EncodeError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_interaction::EncodeExn> for
        ::std::result::Result<(), EncodeError>
    {
        fn from(e: crate::services::my_interaction::EncodeExn) -> Self {
            match e {
                crate::services::my_interaction::EncodeExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::my_interaction::EncodeExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(EncodeError::ApplicationException(aexn)),
            }
        }
    }

}

/// Error definitions for `MyInteractionFast`.
pub mod my_interaction_fast {

    pub type FrobnicateError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_interaction_fast::FrobnicateExn> for
        ::std::result::Result<::std::primitive::i32, FrobnicateError>
    {
        fn from(e: crate::services::my_interaction_fast::FrobnicateExn) -> Self {
            match e {
                crate::services::my_interaction_fast::FrobnicateExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::my_interaction_fast::FrobnicateExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(FrobnicateError::ApplicationException(aexn)),
            }
        }
    }

    pub type PingError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_interaction_fast::PingExn> for
        ::std::result::Result<(), PingError>
    {
        fn from(e: crate::services::my_interaction_fast::PingExn) -> Self {
            match e {
                crate::services::my_interaction_fast::PingExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::my_interaction_fast::PingExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(PingError::ApplicationException(aexn)),
            }
        }
    }

    pub type TruthifyError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_interaction_fast::TruthifyExn> for
        ::std::result::Result<::futures::stream::BoxStream<'static, ::std::result::Result<::std::primitive::bool, crate::errors::my_interaction_fast::TruthifyStreamError>>, TruthifyError>
    {
        fn from(e: crate::services::my_interaction_fast::TruthifyExn) -> Self {
            match e {
                crate::services::my_interaction_fast::TruthifyExn::Success(res) => {
                    use ::futures::stream::StreamExt;
                    let stream = res;
                    ::std::result::Result::Ok(stream.map(|res| match res {
                        ::std::result::Result::Ok(item) => ::std::result::Result::Ok(item),
                        ::std::result::Result::Err(exn) => exn.into(),
                    }).boxed())
                }
                crate::services::my_interaction_fast::TruthifyExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(TruthifyError::ApplicationException(aexn)),
            }
        }
    }

    impl ::std::convert::From<crate::services::my_interaction_fast::TruthifyResponseExn> for
        ::std::result::Result<(), TruthifyError>
    {
        fn from(e: crate::services::my_interaction_fast::TruthifyResponseExn) -> Self {
            match e {
                crate::services::my_interaction_fast::TruthifyResponseExn::Success(res) =>
                    ::std::result::Result::Ok(res),
                crate::services::my_interaction_fast::TruthifyResponseExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(TruthifyError::ApplicationException(aexn)),
            }
        }
    }

    pub type TruthifyStreamError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_interaction_fast::TruthifyStreamExn> for
        ::std::result::Result<::std::primitive::bool, TruthifyStreamError>
    {
        fn from(e: crate::services::my_interaction_fast::TruthifyStreamExn) -> Self {
            match e {
                crate::services::my_interaction_fast::TruthifyStreamExn::Success(res) =>
                    ::std::result::Result::Ok(res),
                crate::services::my_interaction_fast::TruthifyStreamExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(TruthifyStreamError::ApplicationException(aexn)),
            }
        }
    }

    pub type EncodeError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_interaction_fast::EncodeExn> for
        ::std::result::Result<(), EncodeError>
    {
        fn from(e: crate::services::my_interaction_fast::EncodeExn) -> Self {
            match e {
                crate::services::my_interaction_fast::EncodeExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::my_interaction_fast::EncodeExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(EncodeError::ApplicationException(aexn)),
            }
        }
    }

}

/// Error definitions for `SerialInteraction`.
pub mod serial_interaction {

    pub type FrobnicateError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::serial_interaction::FrobnicateExn> for
        ::std::result::Result<(), FrobnicateError>
    {
        fn from(e: crate::services::serial_interaction::FrobnicateExn) -> Self {
            match e {
                crate::services::serial_interaction::FrobnicateExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::serial_interaction::FrobnicateExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(FrobnicateError::ApplicationException(aexn)),
            }
        }
    }

}

/// Error definitions for `MyService`.
pub mod my_service {

    pub type FooError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::FooExn> for
        ::std::result::Result<(), FooError>
    {
        fn from(e: crate::services::my_service::FooExn) -> Self {
            match e {
                crate::services::my_service::FooExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::my_service::FooExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(FooError::ApplicationException(aexn)),
            }
        }
    }

    pub type InteractError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::InteractExn> for
        ::std::result::Result<(), InteractError>
    {
        fn from(e: crate::services::my_service::InteractExn) -> Self {
            match e {
                crate::services::my_service::InteractExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::my_service::InteractExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(InteractError::ApplicationException(aexn)),
            }
        }
    }

    pub type InteractFastError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::InteractFastExn> for
        ::std::result::Result<::std::primitive::i32, InteractFastError>
    {
        fn from(e: crate::services::my_service::InteractFastExn) -> Self {
            match e {
                crate::services::my_service::InteractFastExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::my_service::InteractFastExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(InteractFastError::ApplicationException(aexn)),
            }
        }
    }

    pub type SerializeError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::SerializeExn> for
        ::std::result::Result<(::std::primitive::i32, ::futures::stream::BoxStream<'static, ::std::result::Result<::std::primitive::i32, crate::errors::my_service::SerializeStreamError>>), SerializeError>
    {
        fn from(e: crate::services::my_service::SerializeExn) -> Self {
            match e {
                crate::services::my_service::SerializeExn::Success(res) => {
                    use ::futures::stream::StreamExt;
                    let (resp, stream) = res;
                    ::std::result::Result::Ok((resp, stream.map(|res| match res {
                        ::std::result::Result::Ok(item) => ::std::result::Result::Ok(item),
                        ::std::result::Result::Err(exn) => exn.into(),
                    }).boxed()))
                }
                crate::services::my_service::SerializeExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(SerializeError::ApplicationException(aexn)),
            }
        }
    }

    impl ::std::convert::From<crate::services::my_service::SerializeResponseExn> for
        ::std::result::Result<::std::primitive::i32, SerializeError>
    {
        fn from(e: crate::services::my_service::SerializeResponseExn) -> Self {
            match e {
                crate::services::my_service::SerializeResponseExn::Success(res) =>
                    ::std::result::Result::Ok(res),
                crate::services::my_service::SerializeResponseExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(SerializeError::ApplicationException(aexn)),
            }
        }
    }

    pub type SerializeStreamError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::my_service::SerializeStreamExn> for
        ::std::result::Result<::std::primitive::i32, SerializeStreamError>
    {
        fn from(e: crate::services::my_service::SerializeStreamExn) -> Self {
            match e {
                crate::services::my_service::SerializeStreamExn::Success(res) =>
                    ::std::result::Result::Ok(res),
                crate::services::my_service::SerializeStreamExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(SerializeStreamError::ApplicationException(aexn)),
            }
        }
    }

}

